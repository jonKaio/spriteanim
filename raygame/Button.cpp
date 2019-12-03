#include "Button.h"



void Button::Draw(float _frameTime)
{
	//CurrentState is an enum which behind the scenes is a number
	//Which means we can use it as a subscript index as below.
	switch (CurrentState)
	{
	case Button::NORMAL:
		DrawTexture(spriteCells[CurrentState], x, y,WHITE);
		break;
	case Button::OVER:
		DrawTexture(spriteCells[CurrentState], x, y, WHITE);
		break;
	case Button::DOWN:
		DrawTexture(spriteCells[CurrentState], x, y, WHITE);
		break;
	case Button::DISABLED:
		DrawTexture(spriteCells[3], x, y, WHITE);
		break;
	default:
		break;
	}
}
///Buttons accept 4 textures to be loaded 
///with them representing the following states
///Normal,Over,Down,Disabled
Button::Button(const std::string * filename, const int cellCount, int _x,int _y)
{
	testme = -5;
	std::string tmp;
	spriteCells = new Texture2D[cellCount];
	for (int i = 0; i < cellCount; i++) {
		tmp = "Resources\\" + filename[i];
		spriteCells[i] = LoadTexture(tmp.c_str());
	}
	frameCount = cellCount;
	myRect.x = _x;
	myRect.y = _y;
	myRect.width = spriteCells[0].width;
	myRect.height = spriteCells[0].height;
}

Button::Button()
{
}


Button::~Button()
{
}
