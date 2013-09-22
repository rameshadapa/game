#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <Elementary.h>

typedef struct _Snake Snake;
struct _Snake {
	Eina_List *body;
	Evas_Coord pos_x;
	Evas_Coord pos_y;
};

void snake_create(Snake *snake, Evas_Object *parent);
void snake_draw(Snake *snake);
void snake_update(Snake *snake);

#endif	/* __SNAKE_H__	*/
