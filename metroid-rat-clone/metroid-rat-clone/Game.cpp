#include "Game.h"

void Game::initRenderWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1600, 900), "metroid rat clone");
}

void Game::initState()
{
	this->states.push(new GameState(this->window));
}

Game::Game()
{
	this->initRenderWindow();
}

Game::~Game()
{
	delete this->window;
	while (!this->states.empty())
	{
		this->states.pop();
		delete this->states.top();
	}
}

void Game::update()
{
	if (!this->states.empty())
	{
		this->states.top()->update(this->dt);
	}
}
void Game::updateRender()
{
	if (!this->states.empty())
	{
		this->states.top()->updateRender(this->window);
	}
}

void Game::updateEvents()
{
	
	while (this->window->pollEvent(this->event))
	{
		if (event.type == sf::Event::Closed)
			this->window->close();
	}
}

void Game::updateInput()
{
	if (!this->states.empty())
	{
		this->states.top()->updateInput();
	}
}

void Game::resetDt()
{
	this->dt = this->dtClock.restart().asSeconds();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->update();
		this->updateRender();
	}
}
