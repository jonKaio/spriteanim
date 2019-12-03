#pragma once
#include "Sprite.h"
#include "TestStatic.h"

class Button :
	public Sprite
{
public:
	enum VisualStates
	{
		NORMAL,
		OVER,
		DOWN,
		DISABLED
	};

	VisualStates CurrentState = NORMAL;
	Rectangle myRect;
	
	
	void Draw(float _frameTime) override;
	
	Button(const std::string *filename, const int cellCount , int _x, int _y);

 	Button();
	~Button();
};

