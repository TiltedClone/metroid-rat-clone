#pragma once
#include "State.h"
class Game
{
private:
	sf::RenderWindow* window;
	sf::Event event;

	float dt;
	sf::Clock dtClock;

	std::stack<State*> states;

	void initRenderWindow();
	void initState();
public:
	Game();
	virtual ~Game();
	
	void run();
	void update();
	void updateRender();
	void resetDt();
};

