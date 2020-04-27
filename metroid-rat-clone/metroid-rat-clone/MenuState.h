#pragma once
#include "State.h"
class MenuState :
	public State
{
private:

public:
	MenuState(sf::RenderWindow * window);

	void update(float& dt);
	void updateRender(sf::RenderTarget * renderTarget);
	void updateInput();
};