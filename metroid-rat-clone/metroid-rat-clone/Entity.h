#pragma once
#include <SFML/Graphics.hpp>
class Entity : public sf::Drawable, public sf::Transformable
{
protected:
	sf::RectangleShape shape;

private:

	float g = 0.01;
	sf::Texture texture;

public:
	Entity();
	void gravity(sf::Vector2f pos);

	void Render(sf::RenderWindow* target);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Entity();
};

