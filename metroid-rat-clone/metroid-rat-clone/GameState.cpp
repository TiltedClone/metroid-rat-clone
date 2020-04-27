#include "GameState.h"
#include <iostream>
GameState::GameState(sf::RenderWindow * window) : State(window)
{

	this->rectangle.setSize(sf::Vector2f(300, 300));
	this->rectangle.setPosition(sf::Vector2f(100, 100));
	this->rectangle.setFillColor(sf::Color::Blue);
}

void GameState::update(float & dt)
{
}

void GameState::updateRender(sf::RenderTarget * renderTarget)
{
	this->window->draw(this->rectangle);
}

void GameState::updateInput()
{
}
