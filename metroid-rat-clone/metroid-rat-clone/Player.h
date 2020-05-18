#pragma once
#include "Entity.h"
class Player :
	public Entity, sf::Keyboard
	
{
	float MovementSpeed,acc,g;
	sf::RectangleShape rect;

public:
	Player();

	void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	void update();
	void render(sf::RenderTarget &window);
	~Player();
	bool Interact();
private:
	void init();
	void Movement();
	
};