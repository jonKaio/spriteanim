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

#include "raylib.h"
#include "Sprite.h"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

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

	Sprite *mySprite = new Sprite(filenames, 8, 25);
	mySprite->x = screenWidth / 3;
	mySprite->y = screenHeight / 3;

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
		ClearBackground(WHITE);

		mySprite->Draw(frameTime);
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------   
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}