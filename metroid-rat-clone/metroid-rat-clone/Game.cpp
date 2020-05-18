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
	this->initState();
}

Game::~Game()
{
	delete this->window;
	while (!this->states.empty())
	{
		delete this->states.top();
		this->states.pop();
	}
}

void Game::update()
{
	this->updateEvents();

	if (!this->states.empty())
	{
		this->states.top()->update(this->dt);
	}
}
void Game::updateRender()
{
	this->window->clear();

	if (!this->states.empty())
	{
		this->states.top()->updateRender(this->window);
	}

	this->window->display();
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
