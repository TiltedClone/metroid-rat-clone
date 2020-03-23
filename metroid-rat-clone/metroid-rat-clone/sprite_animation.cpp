#include "sprite_animation.h"


sprite_animation::sprite_animation(int cellx, int celly, int rows, string anim_loc)
{
	width = cellx /rows;
	height = celly;
	row = rows;

	location = anim_loc;

	tex.loadFromFile(anim_loc);

	setTexture(tex);
	IntRect rec(0,0, width, height);

	setTextureRect(rec);
	
}
void sprite_animation::update_animation()
{
	IntRect rec(0 + width * currFrame, 0, width, height);
	setTextureRect(rec);
	if (currFrame == row)
	{
		currFrame = 0;
	}
	else
	{
		currFrame++;
	}
}