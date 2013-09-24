
#include "food.h"
#include "game.h"

void snake_food_create(Snake_Food *food, Evas_Object *parent)
{
	food->mass = evas_object_rectangle_add(evas_object_evas_get(parent));
	evas_object_color_set(food->mass, 255, 0, 0, 255);
}

void snake_food_draw(Snake_Food *food)
{
	evas_object_resize(food->mass, width, height);
	evas_object_show(food->mass);
}

void snake_food_update(Snake_Food *food)
{
	LOG_DBG("%d ::::: %d \n", width, height);
	evas_object_resize(food->mass, width, height);
	evas_object_move(food->mass, food->pos_x*width, food->pos_y*height);
}

void snake_food_generate_random(Snake_Food *food, Evas_Object *parent)
{
	int x, y;
	snake_food_create(food, parent);
	x = rand()%FOOD_BOXES;
	y = rand()%FOOD_BOXES;
	food->pos_x = x;
	food->pos_y = y;
	snake_food_update(food);
}

void snake_food_width_set(Evas_Coord w)
{
	width = w;
}

void snake_food_height_set(Evas_Coord h)
{
	height = h;
}
