#ifndef __CONST_H__
#define __CONST_H__

#define SCREEN_WIDTH	800
#define SCREEN_HEIGHT	480

#define PLAYABLE_WIDTH	600
#define PLAYABLE_HEIGHT	400

#define TIMER_CONST		0.1

/** Layout related constants  ***/
#define GAME_MAIN_GROUP	"game.ui"
#define GAME_PLAYABLE_BG	"game.playable.bg"

/** end layout constants *********/

#define FOOD_BOXES	25

/** Log functions	**/
#ifndef __LAYOUT_EDC__
#define LOG_DBG(...)	fprintf(stdout, __VA_ARGS__)
#endif


#endif 	/**	__CONST_H__	**/
