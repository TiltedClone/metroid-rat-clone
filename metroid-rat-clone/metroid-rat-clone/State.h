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

	virtual void update(float& dt) = 0;
	virtual void updateRender(sf::RenderTarget * renderTarget) = 0;
	virtual void updateInput() = 0;
};

