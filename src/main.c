#include <Elementary.h>

#include "game.h"


int main(int argc, char** argv)
{
	GameData *game;	

	game = calloc(1, sizeof(GameData));
	if(!game)
		return 0;

	game_init(game, argc, argv);
	elm_run();
	elm_shutdown();
	return 0;
}
