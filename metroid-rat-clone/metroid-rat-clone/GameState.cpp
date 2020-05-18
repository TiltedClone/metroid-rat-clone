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
	this->tilemap.loadTexture("tileset.png", sf::Vector2u(32, 32), this->tileVector, 4, 3);

}

void GameState::update(float & dt)
{
}

void GameState::updateRender(sf::RenderTarget * renderTarget)
{
	this->window->draw(this->tilemap);
}

void GameState::updateInput()
{
}

GameState::~GameState()
{
}
