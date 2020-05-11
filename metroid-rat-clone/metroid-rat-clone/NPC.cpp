#include "NPC.h"
#include <iostream>


NPC::NPC()
{
	init();
}

void NPC::update(bool Interact, sf::Vector2f pos)
{
	if (Interact && pos.x<getPosition().x + (interactBox.x / 2) && pos.x>getPosition().x - (interactBox.x / 2) && pos.y<getPosition().y + (interactBox.y / 2) && pos.y > getPosition().y - (interactBox.y / 2)) {
		std::cout << "hello";
	}
	
	rect.setPosition(getPosition());
	gravity(getPosition());
}

void NPC::render(sf::RenderTarget &window)
{
	window.draw(rect);
}

void NPC::init()
{
	rect.setSize(sf::Vector2f(30, 30));
	setPosition(sf::Vector2f(300, 300));

	interactBox = sf::Vector2f(200,200);
	
}


NPC::~NPC()
{
}
