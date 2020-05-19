#pragma once
#include <string>
#include <SFML\Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

class sprite_animation : public Sprite
{
	int width;
	int height;
	//TODO:Make container
	vector<IntRect> row;
	bool looping;

	string location;
	Texture tex;
	int currFrame = 0;
public:
	sprite_animation();
	void init(int cellx, int celly, int rows, bool loop, string anim_loc);
	void update_animation();
	void set_animation_frame(int Frame);
};

