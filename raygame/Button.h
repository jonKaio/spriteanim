#pragma once
#include "Sprite.h"
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
	void Draw(float _frameTime) override;

	Button();
	~Button();
};

