#pragma once
#include "raylib.h"
#include <iostream>
#include "TestStatic.h"
class Sprite :
	public Vector2
{
public:
	Texture2D *spriteCells =nullptr;
	float frameRate = 25.0;
	int frameCount = 0;
	int direction = 1;

	
	virtual void Draw(float _frameTime);

	Sprite();
	Sprite(const std::string *filename, const int cellCount = 1, const float _frameRate = 25.0);
	~Sprite();
};

