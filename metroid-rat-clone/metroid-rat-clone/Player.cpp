#include "Player.h"



Player::Player()
{
	init();
}

void Player::init()
{
	MovementSpeed = 0.1;
	g = 0.001;
	acc = 0;
	rect.setSize(sf::Vector2f(20, 20));
}

void Player::Movement()
{
	
	if (isKeyPressed(Left)) {
		move(sf::Vector2f(-MovementSpeed, 0));
	}
	if (isKeyPressed(Right)) {
		move(sf::Vector2f(MovementSpeed, 0));
	}
	if (isKeyPressed(Up)) {
		//move(sf::Vector2f(0, -MovementSpeed));
		acc = -0.5;
	}
	if (isKeyPressed(Down)) {
		move(sf::Vector2f(0 , MovementSpeed));
	}
	move(sf::Vector2f(0, acc));
	acc = g;
	rect.setPosition(getPosition());
}


bool Player::Interact() {
	return isKeyPressed(E);
}
void Player::update() 
{
	Movement();
	gravity(getPosition());
	//Interact();
}
void Player::render(sf::RenderTarget &window) 
{
	window.draw(rect);
}
Player::~Player()
{
	
}
