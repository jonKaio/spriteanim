#include "Button.h"



void Button::Draw(float _frameTime)
{
	//we don't care about _frameTime
	static VisualStates CurrentState = NORMAL;

	switch (CurrentState)
	{
	case Button::NORMAL:
		DrawTexture(spriteCells[0], x, y,WHITE);
		break;
	case Button::OVER:
		DrawTexture(spriteCells[1], x, y, WHITE);
		break;
	case Button::DOWN:
		DrawTexture(spriteCells[2], x, y, WHITE);
		break;
	case Button::DISABLED:
		DrawTexture(spriteCells[3], x, y, WHITE);
		break;
	default:
		break;
	}
}

Button::Button()
{
}


Button::~Button()
{
}
