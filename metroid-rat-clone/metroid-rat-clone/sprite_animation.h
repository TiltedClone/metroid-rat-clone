#pragma once
#include <string>
#include <SFML\Graphics.hpp>
using namespace std;
using namespace sf;

class sprite_animation : public Sprite
{
	int width;
	int height;
	int row;
	
	string location;
	Texture tex;
	int currFrame = 0;
public:
	sprite_animation(int cellx, int celly, int rows, string anim_loc);
	void update_animation();
};

