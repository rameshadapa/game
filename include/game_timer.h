#ifndef __GAME_TIMER_H__
#define __GAME_TIMER_H__

typedef struct _game_timer game_timer;
struct _game_timer	{
	Ecore_Timer *timer;
};

void game_timer_create(Ecore_Timer* timer);
void game_timer_resume(Ecore_Timer* timer);
void game_timer_pause(Ecore_Timer* timer);
void game_timer_exit(Ecore_Timer* timer);

static Eina_Bool _timer_callback(void *data);

#endif	/**	__GAME_TIMER_H__	**/
