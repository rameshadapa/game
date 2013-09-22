
#include "food.h"

void snake_food_create(Snake_Food *food, Evas_Object *parent)
{
	food = calloc(1, sizeof(Snake_Food));
	food->mass = evas_object_rectangle_add(evas_object_evas_get(parent));
	elm_win_resize_object_add(parent, food->mass);
}

void snake_food_draw(Snake_Food *food)
{
	evas_object_show(food->mass);
}

void snake_food_update(Snake_Food *food)
{
}
