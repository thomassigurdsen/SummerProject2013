#ifndef GAME_WORLD_H

#define GAME_WORLD_H

#include "includes.h"

class GameWorld
{
protected:
	Character * player;
	DungeonLevel * dungeons;
	
public:
	GameWorld();
	int gameLoop(sf::RenderWindow * screen);
	void drawDungeon(sf::RenderWindow * screen);
	bool inputHandler(sf::RenderWindow * screen);
};

#endif