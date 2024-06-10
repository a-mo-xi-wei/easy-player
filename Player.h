#ifndef PLAYER_H_
#define PLAYER_H_

#include<QWidget>
#include<vlc/vlc.h>

namespace Ui { class Player; }

class Player : public QWidget
{
	Q_OBJECT
public:
	Player(QWidget* parent = nullptr);
	~Player();
	void initUi();
	void openMedia();
	void attachEvent();
	static void handleEvents(const struct libvlc_event_t* ev, void* data);

private slots:
	void on_playBtn_clicked();
	void on_changeBtn_clicked();

	void on_volumeSlider_valueChanged();
	void on_playSpeedCmb_currentIndexChanged();

	void on_progressSlider_sliderMoved(int value);
	void on_progressSlider_sliderPressed();
	void on_progressSlider_sliderReleased();

private:
	Ui::Player* ui;
	libvlc_instance_t* vlc_ins{};
	libvlc_media_player_t* vlc_player{};
	QString m_url;
};


#endif // !PLAYER_H_
