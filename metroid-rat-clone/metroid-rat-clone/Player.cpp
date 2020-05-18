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
	int MoveX = isKeyPressed(Right) - isKeyPressed(Left);
	int MoveY = -isKeyPressed(Up);
	move(sf::Vector2f(MoveX * MovementSpeed, MoveY));
	
	rect.setPosition(getPosition());
}

bool Player::Interact() {
	return isKeyPressed(E);
}
void Player::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(rect);
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
