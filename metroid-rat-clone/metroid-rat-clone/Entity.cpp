#include "Entity.h"

Entity::Entity() 
{
	
}
void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(shape, states);
}

void Entity::gravity(sf::Vector2f pos) {
	if (pos.y < 400) {
		move(sf::Vector2f(0, g));
		g += 0.001;
	}
	else {
		g = 0;
	}
}


void Entity::Render(sf::RenderWindow* target)
{
	target->draw(this->shape);
}


Entity::~Entity()
{

}
