#include <SFML/Graphics.hpp>
#include "Entity.h"
int main()
{
	
	Entity player;
	player.setPosition(sf::Vector2f(1, 2));


	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(player);
		window.display();
	}

	return 0;
}