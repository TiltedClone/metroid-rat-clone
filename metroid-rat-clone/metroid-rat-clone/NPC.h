#pragma once
#include "Entity.h"
class NPC :
	public Entity
{
	
	sf::RectangleShape rect;
public:
	NPC();
	void update(bool Interact, sf::Vector2f pos);
	void render(sf::RenderTarget &window);
	

	~NPC();
private:
	
	sf::Vector2f interactBox;
	void init();
};

