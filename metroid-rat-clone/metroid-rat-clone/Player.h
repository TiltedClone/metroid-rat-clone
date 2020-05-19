#pragma once
#include "Entity.h"
#include "sprite_animation.h"
class Player :
	public Entity, sf::Keyboard
	
{
	float MovementSpeed, acc, g;
	sprite_animation animation;

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