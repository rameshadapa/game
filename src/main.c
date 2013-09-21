#include <Elementary.h>

#include "const.h"

void _on_exit(void *data, Evas_Object *obj, void *event)
{
	elm_exit();
}
int main(int argc, char** argv)
{
	Evas_Object *win, *layout;	
	elm_init(argc, argv);
	win = elm_win_util_standard_add("game", "snake-game");
	evas_object_smart_callback_add(win, "delete,request", _on_exit, NULL);
	elm_win_autodel_set(win, EINA_TRUE);
	evas_object_resize(win, SCREEN_WIDTH, SCREEN_HEIGHT);
	evas_object_move(win, 100, 100);
	evas_object_show(win);
	
	layout = elm_layout_add(win);
	elm_layout_file_set(layout, "data/edje/layout.edj", GAME_MAIN_GROUP);
	evas_object_size_hint_weight_set(layout, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
	elm_win_resize_object_add(win, layout);
	evas_object_show(layout);

	elm_run();
	elm_shutdown();
	return 0;
}
