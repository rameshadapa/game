#ifndef __GAME_H__
#define __GAME_H__

#include <Elementary.h>

typedef struct _GameData GameData;

struct _GameData	{
	Evas_Object *win;
	Evas_Object *layout;
};

void game_init();
void game_resume();
void game_pause();
void game_quit();

#endif	/***	__GAME_H__	****/
