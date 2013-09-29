#include "game_timer.h"

void game_timer_create(Ecore_Timer *timer, void *parent)
{
	ecore_timer_add(TIMER_CONST, _timer_callback, parent);
}

void game_timer_resume(Ecore_Timer *timer)
{
}

void game_timer_pause(Ecore_Timer *timer)
{
}

void game_timer_exit(Ecore_Timer *timer)
{
}

static Eina_Bool _timer_callback(void *data)
{
}
