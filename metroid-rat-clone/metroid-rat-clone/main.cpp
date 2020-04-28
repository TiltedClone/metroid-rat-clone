#include <SFML/Graphics.hpp>
#include "GUI_manager.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode(200,200), "SFML WORKS!");

	GUI_manager manager;

	manager.Game.reset(sf::FloatRect(100, 010, 100, 100));
	manager.UI.reset(sf::FloatRect(300, 300, 300, 100));

	sf::RectangleShape rect;
	rect.setFillColor(sf::Color::Cyan);
	rect.setSize(sf::Vector2f(100, 100));

	window.setView(manager.Game);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(rect);
		window.display();
	}
	
	return 0;
}