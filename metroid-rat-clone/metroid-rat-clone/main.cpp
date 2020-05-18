#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "NPC.h"
#include "Game.h"

int main()
{
	//
	//Player player;
	//NPC npc;
	//player.setPosition(sf::Vector2f(1, 2));

	//
	//sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//	}

	//	window.clear();
	//	//shape.setPosition(player.getPosition());
	//	player.update();
	//	player.render(window);
	//	npc.update(player.Interact(), player.getPosition());
	//	npc.render(window);
	//	//std::cout << player.getPosition().x << player.getPosition().y;

	//	//window.draw(shape);
	//	window.display();
	//}
	Game game;
	game.run();

	return 0;
}