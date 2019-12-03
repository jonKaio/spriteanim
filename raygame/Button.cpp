#include "Button.h"



namespace MyUITest {
	void Button::Draw(float _frameTime)
	{
		//CurrentState is an enum which behind the scenes is a number
		//Which means we can use it as a subscript index as below.

		DrawTexture(spriteCells[CurrentState], myRect.x, myRect.y, WHITE);
		return;

		//switch (CurrentState)
		//{
		//case VisualStates::NORMAL:
		//	DrawTexture(spriteCells[CurrentState], myRect.x, myRect.y, WHITE);
		//	break;
		//case VisualStates::OVER:
		//	DrawTexture(spriteCells[CurrentState], myRect.x, myRect.y, WHITE);
		//	break;
		//case VisualStates::DOWN:
		//	DrawTexture(spriteCells[CurrentState], myRect.x, myRect.y, WHITE);
		//	break;
		//case VisualStates::DISABLED:
		//	DrawTexture(spriteCells[3], myRect.x, myRect.y, WHITE);
		//	break;
		//default:
		//	break;
		//}
	}
	///Buttons accept 4 textures to be loaded 
	///with them representing the following states
	///Normal,Over,Down,Disabled
	Button::Button(const std::string* filename, const int cellCount, int _x, int _y)
	{
		std::string tmp;
		spriteCells = new Texture2D[cellCount];
		for (int i = 0; i < cellCount; i++) {
			tmp =  filename[i];
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
}