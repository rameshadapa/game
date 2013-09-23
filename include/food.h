#ifndef __FOOD_H__
#define __FOOD_H__

#include <Elementary.h>

#include "const.h"

typedef struct _Snake_Food Snake_Food;

static Evas_Coord 	width = PLAYABLE_WIDTH/FOOD_BOXES;
static Evas_Coord 	height = PLAYABLE_HEIGHT/FOOD_BOXES;

struct _Snake_Food {
	Evas_Object 	*mass;
	Evas_Coord	pos_x;
	Evas_Coord	pos_y;
	Eina_Bool	isHead;
};

void snake_food_create(Snake_Food *food, Evas_Object *parent);
void snake_food_draw(Snake_Food *food);
void snake_food_update(Snake_Food *food);
void snake_food_generate_random(Snake_Food *food, Evas_Object *parent);
void snake_food_width_set(Evas_Coord w)
{
	width = w;
}
void snake_food_height_set(Evas_Coord h)
{
	height = h;
}

#endif	/*	__FOOD_H__	*/
