#include "sprite_animation.h"


sprite_animation::sprite_animation(int cellx, int celly, int rows, bool loop, string anim_loc)
{
	width = cellx /rows;
	height = celly;

	for (int i = 0; i < rows; i++)
	{
		IntRect rec(0 + width * i, 0, width, height);
		row.push_back(rec);
	}

	looping = loop;
	location = anim_loc;
	tex.loadFromFile(anim_loc);
	setTexture(tex);
	setTextureRect(row[0]);
	
}
void sprite_animation::update_animation()
{
	setTextureRect(row[currFrame]);
	cout << row[currFrame].left << "\n";
	if (currFrame == row.size()-1 && looping) {
		currFrame = 0;
	}
	else {
		currFrame >= row.size()-1 ? currFrame = row.size()-1 : currFrame++;
	}
}
void sprite_animation::set_animation_frame(int Frame)
{
	currFrame = Frame;
	setTextureRect(row[Frame]);
}