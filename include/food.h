#ifndef __FOOD_H__
#define __FOOD_H__

#include <Elementary.h>

typedef struct _Snake_Food Snake_Food;

struct _Snake_Food {
	Evas_Object 	*mass;
	Evas_Coord	pos_x;
	Evas_Coord	pos_y;
	Evas_Coord 	width;
	Evas_Coord 	height;
	Eina_Bool	isHead;
};

void snake_food_create(Snake_Food *food, Evas_Object *parent);
void snake_food_draw(Snake_Food *food);
void snake_food_update(Snake_Food *food);

#endif	/*	__FOOD_H__	*/
