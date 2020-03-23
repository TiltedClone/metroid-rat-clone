#pragma once
#include <SFML/Graphics.hpp>
class Entity : public sf::Drawable, public sf::Transformable
{
protected:
	sf::RectangleShape shape;
private:

	int MovementSpeed;
	sf::Texture texture;

public:
	Entity();
	void InitVar();
	void Update();
	void Render(sf::RenderWindow* target);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Entity();
};

