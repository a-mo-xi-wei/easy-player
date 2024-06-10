#include<QApplication>
#include<vlc/vlc.h>
#include"Player.h"

//去除黑窗口
#pragma comment(linker,"/subsystem:windows /entry:mainCRTStartup")

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	Player player;
	player.show();

	return a.exec();
	/*
	printf("Version : %s\n", libvlc_get_version());

	//0. 创建libvlc实例
	libvlc_instance_t* vlc_instance = libvlc_new(0, nullptr);
	if (!vlc_instance) {
		printf("vlc new failed : %s\n", libvlc_errmsg());
		return -1;
	}
	//1.打开媒体文件 
	libvlc_media_t* media = libvlc_media_new_path(vlc_instance,
		"../../Res/output.mp4");
	if (!media) {
		printf("media new failed : %s\n", libvlc_errmsg());
		return -1;
	}
	//根据媒体文件创建播放器
	libvlc_media_player_t* mediaPlayer =
		libvlc_media_player_new_from_media(media);
	if (!mediaPlayer) {
		printf("media player new failed : %s\n", libvlc_errmsg());
		return -1;
	}
	//释放媒体，因为媒体已经加载到了播放器中
	libvlc_media_release(media);
	media = NULL;
	
	//设置视频显示窗口
	libvlc_media_player_set_hwnd(mediaPlayer, (void*)player.winId());
	
	//播放器播放
	libvlc_media_player_play(mediaPlayer);
	
	int ret = a.exec();
	////释放媒体播放器
	libvlc_media_player_release(mediaPlayer);
	////释放vlc实例
	libvlc_release(vlc_instance);
	
	return ret;*/
}