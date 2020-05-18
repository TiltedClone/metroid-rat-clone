#pragma once
#include "Entity.h"
class Player :
	public Entity, sf::Keyboard
	
{
	float MovementSpeed,acc,g;
	sf::RectangleShape rect;

public:
	Player();
	void update();
	void render(sf::RenderTarget &window);
	~Player();
	bool Interact();
private:
	void init();
	void Movement();
	
};