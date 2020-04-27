#pragma once
#include "State.h"
class GameState :
	public State
{
private:

public:
	GameState(sf::RenderWindow * window);

	void update(float& dt);
	void updateRender(sf::RenderTarget * renderTarget);
	void updateInput();
};

