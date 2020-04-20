#pragma once
#include <SFML/Graphics.hpp>
#include <stack>
class State
{
protected:
	sf::RenderWindow *window;
public:
	State(sf::RenderWindow * window);
	virtual ~State();

	virtual void update() = 0;
	virtual void updateRender() = 0;
};

