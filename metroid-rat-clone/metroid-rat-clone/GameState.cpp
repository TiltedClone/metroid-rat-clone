#include "GameState.h"
#include <iostream>
GameState::GameState(sf::RenderWindow * window) : State(window)
{
	Tile G(0, false);
	Tile S(3, true);
	this->tileVector = 
	{
		{G,G,G,G},
		{G,G,G,G},
		{S,S,S,S}
	};
	this->tilemap.loadTexture("tileset.png", sf::Vector2u(32, 32), this->tileVector, window->getSize());

	this->player.setPosition(1500, 450);
}

void GameState::update(float & dt)
{
	this->player.update();
}

void GameState::updateRender(sf::RenderTarget * renderTarget)
{
	this->window->draw(this->tilemap);
	this->window->draw(this->player);
}

void GameState::updateInput()
{
}
