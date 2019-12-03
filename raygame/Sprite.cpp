#include "Sprite.h"

namespace MyUITest {

	Sprite::Sprite()
	{
	}


	void Sprite::Draw(float _frameTime)
	{

		static float myFrameTime = 0;
		static int fidx = 0;
		DrawTexture(spriteCells[fidx], x, y, RAYWHITE);
		myFrameTime += _frameTime;
		if (myFrameTime > frameRate) {
			fidx++;
			if (fidx >= frameCount)fidx = 0;
			myFrameTime = 0;
		}
	}

	Sprite::Sprite(const std::string* filename, const int cellCount, const float _frameRate)
	{
		testme = -5;
		std::string tmp;
		spriteCells = new Texture2D[cellCount];
		for (int i = 0; i < cellCount; i++) {
			tmp = "Resources\\" + filename[i];
			spriteCells[i] = LoadTexture(tmp.c_str());
		}
		frameCount = cellCount;
		frameRate = 1 / _frameRate;
	}

	Sprite::~Sprite()
	{
	}
}
