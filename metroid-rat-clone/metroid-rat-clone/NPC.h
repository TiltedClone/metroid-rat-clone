#pragma once
#include "Entity.h"
class NPC :
	public Entity
{
	
	sf::RectangleShape rect;
public:
	NPC();
	void update(bool Interact, sf::Vector2f pos);
	sf::RectangleShape text;
	void render(sf::RenderTarget &window);
	

	~NPC();
private:
	bool interacted;
	sf::Vector2f interactBox;
	void init();
};

