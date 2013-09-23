#ifndef __GAME_H__
#define __GAME_H__

#include <Elementary.h>
#include "const.h"

#include "food.h"
#include "snake.h"


typedef struct _GameData GameData;

struct _GameData	{
	Evas_Object *win;
	Evas_Object *layout;
	Snake *snake;
	Snake_Food *food;
};

void game_init(GameData *data, int argc, char** argv);
void game_resume(GameData *data);
void game_pause(GameData *data);
void game_quit(GameData *data);
void game_draw(GameData *data);
void game_update(GameData *data);
static void _on_exit(void *data, Evas_Object *obj, void *event);
static Eina_Bool _game_key_down_cb(void *data, int type, void *event);
static Eina_Bool _game_key_up_cb(void *data, int type, void *event);

#endif	/***	__GAME_H__	****/
