#include <SFML/Graphics.hpp>
#include "sprite_animation.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sprite_animation s1(630, 144, 7, false, "C:/Users/gurra/OneDrive/Bilder/MegaMan.png");
	sprite_animation s2(630, 144, 7, true, "C:/Users/gurra/OneDrive/Bilder/MegaMan.png");

	s2.move(Vector2f(90, 0));
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
		s1.update_animation();
		s2.set_animation_frame(3);

		window.draw(s1);
		window.draw(s2);
		window.display();
	}

	return 0;
}