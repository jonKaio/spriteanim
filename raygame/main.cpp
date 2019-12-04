/*******************************************************************************************
*
*   raylib [core] example - basic window
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/
#include <string>
#include "raylib.h"
#include "Sprite.h"
#include "Button.h"
using namespace MyUITest;

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;

	int * numbers = new int[10];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 5;
	numbers[4] = 8;

	InitWindow(screenWidth, screenHeight, "Basic Button Example.");

	SetTargetFPS(60);

	std::string filenames[]{
		"character_robot_walk0.png",
		"character_robot_walk1.png",
		"character_robot_walk2.png",
		"character_robot_walk3.png",
		"character_robot_walk4.png",
		"character_robot_walk5.png",
		"character_robot_walk6.png",
		"character_robot_walk7.png" };

	Sprite* mySprite = new Sprite(filenames, 8, 25);
	mySprite->x = screenWidth / 3;
	mySprite->y = screenHeight / 3;

	std::string buttons[]{
		"blue_button00.png",
		"blue_button01.png",
		"blue_button02.png",
		"blue_button03.png" };

	Button* myButt = new Button(buttons, 4, 30, 30);

	//--------------------------------------------------------------------------------------
	float frameTime;
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		frameTime = GetFrameTime();
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		int key = GetKeyPressed();
		int num = 143;
		std::string tmp("Lots of text");
		std::string t2(tmp+ std::to_string(num));
		DrawText( t2.c_str() ,100,200,25, BLACK);


		myButt->CurrentState = Button::NORMAL;
		if (CheckCollisionPointRec(GetMousePosition(), myButt->myRect)) {

			myButt->CurrentState = Button::OVER;

			if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
				myButt->CurrentState = Button::DOWN;


		}
		ClearBackground(WHITE);

		mySprite->Draw(frameTime);

		myButt->Draw(frameTime);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}