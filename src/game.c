#include "game.h"

static void _on_exit(void *data, Evas_Object *obj, void *event)
{
	elm_exit();
}

static Eina_Bool _game_key_down_cb(void *data, int type, void *event)
{
}

static Eina_Bool _game_key_up_cb(void *data, int type, void *event)
{
}

void game_init(GameData *data, int argc, char** argv)
{
	ecore_event_init();
   	ecore_event_handler_add(ECORE_EVENT_KEY_DOWN, _game_key_down_cb, data);
   	ecore_event_handler_add(ECORE_EVENT_KEY_UP, _game_key_up_cb, data);

	elm_init(argc, argv);
	data->win = elm_win_util_standard_add(PROJ_NAME, PROJ_NAME);
	evas_object_smart_callback_add(data->win, "delete,request", _on_exit, NULL);
	elm_win_autodel_set(data->win, EINA_TRUE);
	evas_object_resize(data->win, SCREEN_WIDTH, SCREEN_HEIGHT);
	evas_object_show(data->win);

	data->layout = elm_layout_add(data->win);
	elm_layout_file_set(data->layout, LAYOUT_EDJ, GAME_MAIN_GROUP);
	evas_object_size_hint_weight_set(data->layout, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
	elm_win_resize_object_add(data->win, data->layout);
	evas_object_show(data->layout);

}

void game_resume(GameData *data)
{
}

void game_pause(GameData *data)
{
}

void game_quit(GameData *data)
{
}

void game_draw(GameData *data)
{
}

void game_update(GameData *data)
{
}
