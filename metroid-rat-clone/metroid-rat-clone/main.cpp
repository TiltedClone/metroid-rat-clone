#include <SFML/Graphics.hpp>
#include "sprite_animation.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sprite_animation s(561, 144, 7, "C:/Users/gurra/OneDrive/Bilder/MegaMan.png");
	
	window.setFramerateLimit(16);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		s.update_animation();

		window.draw(s);
		window.display();
	}

	return 0;
}