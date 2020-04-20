#include <SFML/Graphics.hpp>
#include "Game.h"
#include <iostream>


int main()
{
	//sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
	//window.setFramerateLimit(60);
	//sf::View view;
	//view.reset(sf::FloatRect(0, 0, 1600, 900));
	//
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	//int minScreen{ 0 };
	//int maxScreen{ 1000 };
	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//	}
	//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	//	{
	//		shape.move(sf::Vector2f(2, 0));
	//	}
	//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	//	{
	//		shape.move(sf::Vector2f(-2, 0));
	//	}
	//	if (!(shape.getPosition().x < minScreen) && !(shape.getPosition().x > maxScreen))
	//	{
	//		view.setCenter(shape.getPosition());
	//	}
	//	std::cout << view.getCenter().x << ", "<< shape.getPosition().x <<std::endl;
	//	

	//	window.clear();
	//	window.setView(view);
	//	window.draw(shape);
	//	window.display();
	//}
	Game game;
	game.run();


	return 0;
}