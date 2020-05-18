#pragma once
#include "State.h"
#include "TileMap.h"
class GameState :
	public State
{
private:
	std::vector<std::vector<Tile>> tileVector;
	TileMap tilemap;
public:
	GameState(sf::RenderWindow * window);

	void update(float& dt);
	void updateRender(sf::RenderTarget * renderTarget);
	void updateInput();

};

