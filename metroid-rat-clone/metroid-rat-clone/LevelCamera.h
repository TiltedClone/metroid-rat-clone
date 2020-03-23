#pragma once
#include <SFML/Graphics.hpp>
class LevelCamera
{
private:
	sf::RenderWindow window;
	sf::View view;
	enum cameraState {MENU, LEVEL};
public:
	void followCharacter(sf::Vector2f position);

};

