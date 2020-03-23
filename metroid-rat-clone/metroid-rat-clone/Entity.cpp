#include "Entity.h"

Entity::Entity()
{

}
void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(shape, states);
}
void Entity::InitVar()
{
	
}


void Entity::Update()
{
}

void Entity::Render(sf::RenderWindow* target)
{
	target->draw(this->shape);
}


Entity::~Entity()
{
}
