#include "Player.h"
#include "sprite_animation.h"
Player::Player()
{
	init();
}

void Player::init()
{
	MovementSpeed = 0.1;
	g = 0.001;
	acc = 0;
	
	animation.init(16, 8, 2, true, "player.png");
	animation.setScale(10, 10);
}

void Player::Movement()
{
	int MoveX = isKeyPressed(Right) - isKeyPressed(Left);
	int MoveY = -isKeyPressed(Up);
	move(sf::Vector2f(MoveX * MovementSpeed, MoveY));
	
	animation.setPosition(getPosition());	

}

bool Player::Interact() {
	return isKeyPressed(E);
}
void Player::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(animation);
}
void Player::update()
{
	Movement();
	gravity(getPosition());
	//Interact();	
	animation.update_animation();

}
void Player::render(sf::RenderTarget &window) 
{
	window.draw(animation);
}
Player::~Player()
{
	
}
