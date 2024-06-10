#include "Player.h"
#include "ui_Player.h"
#include<QFileDialog>
#include<QFile>

Player::Player(QWidget* parent)
	:QWidget(parent)
	, ui(new Ui::Player)
	, vlc_ins(libvlc_new(0,nullptr))
{
	ui->setupUi(this);
	initUi();
	if (!vlc_ins) {
		qWarning("libvlc new failed： % s", libvlc_errmsg());
	}
}

Player::~Player()
{
	delete ui;
	if (vlc_ins)libvlc_release(vlc_ins);
	if (vlc_player)libvlc_media_player_release(vlc_player);
}

void Player::initUi()
{
	QFile file(":/Res/style.qss");
	if (!file.open(QIODevice::ReadOnly)) {
		qDebug() << "样式表打开失败QAQ";
		return;
	}
	
	QString styleStr = file.readAll();
	this->setStyleSheet(styleStr);
	

	this->setWindowIcon(QIcon(":/Res/player.png"));
	ui->playBtn->setIcon(QIcon(":/Res/pause.png"));
	ui->changeBtn->setIcon(QIcon(":/Res/change.png"));

	//ui->playSpeedCmb->setView(new QListView());
	ui->playSpeedCmb->addItem(QIcon(":/Res/1.png"), "1 倍速", 1);
	ui->playSpeedCmb->addItem(QIcon(":/Res/1.5.png"), "1.5 倍速", 1.5);
	ui->playSpeedCmb->addItem(QIcon(":/Res/2.png"), "2 倍速", 2);
	ui->playSpeedCmb->setCurrentIndex(0);//即第一项


}

void Player::openMedia()
{
	this->m_url = QFileDialog::getOpenFileName(this,
		"选择媒体", "./", "video (*.mp4;*.wav;*.flv;*.avi);;audio (*.mp3;*.ogg;*.wav)");
	if (this->m_url.isEmpty())return;

}

void Player::attachEvent()
{
	auto em = libvlc_media_player_event_manager(vlc_player);
	//播放时间改变
	libvlc_event_attach(em, libvlc_MediaPlayerTimeChanged, handleEvents, this);
	//开始播放
	libvlc_event_attach(em, libvlc_MediaPlayerPlaying, handleEvents, this);
	//停止播放
	libvlc_event_attach(em, libvlc_MediaPlayerStopped, handleEvents, this);

}

void Player::handleEvents(const libvlc_event_t* ev, void* data)
{
	Player* player = static_cast<Player*>(data);
	switch (ev->type)
	{
	case libvlc_MediaPlayerTimeChanged:
	{
		auto pos = libvlc_media_player_get_position(player->vlc_player);
		auto duration = libvlc_media_player_get_length(player->vlc_player) / 1000;
		libvlc_time_t t = pos * duration;
		player->ui->pastTimeLab->setText(QString("%1:%2:%3")
			.arg(t / 60 / 60, 2, 10, QChar('0'))
			.arg(t / 60, 2, 10, QChar('0'))
			.arg(t % 60, 2, 10, QChar('0'))
		);
		auto v = pos * (player->ui->progressSlider->maximum() + 1);
		player->ui->progressSlider->setValue(v);
		break;
	}
		
	case libvlc_MediaPlayerPlaying:
	{
		libvlc_time_t duration = libvlc_media_player_get_length(player->vlc_player)/1000;
		player->ui->totalTimeLab->setText(QString("%1:%2:%3")
			.arg(duration / 60 / 60, 2, 10, QChar('0'))
			.arg(duration / 60, 2, 10, QChar('0'))
			.arg(duration % 60, 2, 10, QChar('0'))
		);
		break;
	}
	case libvlc_MediaPlayerStopped:
	{

		break;
	}
	default:
		break;
	}
}

void Player::on_playBtn_clicked() {
	//qDebug() << "URL : " << this->m_url;
	if (this->m_url.isEmpty()) {
		openMedia();
		if (this->m_url.isEmpty())return;
	}
	if (!vlc_player) {
		auto media = libvlc_media_new_path(this->vlc_ins, 
			QDir::toNativeSeparators(m_url).toUtf8());
		if (!media) {
			qWarning("media new failed： % s", libvlc_errmsg());
			return;
		}
		this->vlc_player = libvlc_media_player_new_from_media(media);
		if (!vlc_player) {
			qWarning("vlc_player new failed： % s", libvlc_errmsg());
			return;
		}
		libvlc_media_release(media);
		libvlc_media_player_set_hwnd(vlc_player, (void*)ui->videoWidget->winId());
		ui->volumeSlider->setValue(libvlc_audio_get_volume(vlc_player));
		attachEvent();
	}

	
	if (libvlc_media_player_is_playing(vlc_player)) {
		libvlc_media_player_pause(vlc_player);
		ui->playBtn->setText("播放");
	}
	else {
		libvlc_media_player_play(this->vlc_player);
		ui->playBtn->setText("暂停");
	}
}

void Player::on_changeBtn_clicked()
{
	if (vlc_player) {
		libvlc_media_player_stop(vlc_player);
		libvlc_media_player_release(vlc_player);
		vlc_player = nullptr;
		this->m_url = QString();
		ui->pastTimeLab->setText("00:00:00");
		ui->totalTimeLab->setText("00:00:00");
		ui->progressSlider->setValue(0);
		ui->playSpeedCmb->setCurrentIndex(0);
	}
	ui->playBtn->click();
}

void Player::on_volumeSlider_valueChanged()
{
	if (!vlc_player)return;
	libvlc_audio_set_volume(vlc_player, ui->volumeSlider->value());
}

void Player::on_playSpeedCmb_currentIndexChanged()
{
	//qDebug() << __FUNCTION__ << ui->playSpeedCmb->currentData();
	if (!vlc_player || this->m_url.isEmpty()) {
		ui->playSpeedCmb->setCurrentIndex(0);
		return;
	}
	auto rate = ui->playSpeedCmb->currentData();
	libvlc_media_player_set_rate(vlc_player, rate.toFloat());
}

void Player::on_progressSlider_sliderMoved(int value)
{
	if (!vlc_player)return;
	libvlc_media_player_set_position(vlc_player, (double)value / (ui->progressSlider->maximum() + 1));
}

void Player::on_progressSlider_sliderPressed()
{
	if (!vlc_player)return;
	libvlc_media_player_pause(vlc_player);
}

void Player::on_progressSlider_sliderReleased()
{
	if (!vlc_player)return;
	libvlc_media_player_play(vlc_player);

}
