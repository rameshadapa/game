#include <Elementary.h>

void _on_exit(void *data, Evas_Object *obj, void *event)
{
	elm_exit();
}
int main(int argc, char** argv)
{
	Evas_Object *win;	
	elm_init(argc, argv);
	win = elm_win_util_standard_add("game", "snake-game");
	evas_object_smart_callback_add(win, "delete,request", _on_exit, NULL);
	elm_win_autodel_set(win, EINA_TRUE);
	evas_object_resize(win, 240, 400);
	evas_object_move(win, 100, 100);
	evas_object_show(win);
	elm_run();
	elm_shutdown();
	return 0;
}
