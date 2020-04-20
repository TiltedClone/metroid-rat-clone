#include "Game.h"

void Game::initRenderWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1600, 900), "metroid rat clone");
}

Game::Game()
{
	this->initRenderWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::update()
{
}

void Game::updateRender()
{
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->update();
		this->updateRender();
	}
}
