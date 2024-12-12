// EntornProva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <random>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <ctime>
using namespace sf;
const int Xmax = 1920;
const int Ymax = 1080;

Clock reloj;
//srand((int)time(0));
struct CloudStructure {
	Sprite dibuix;
	bool Active;
	float Speed;
};


int main()
{

	// Create a video mode object
	VideoMode vm(Xmax, Ymax);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;
	Texture textureTree;
	Texture textureBee;
	Texture textureCloud;

	// Load a graphic into the texture
	textureBackground.loadFromFile("./graphics/background.png");
	textureTree.loadFromFile("./graphics/tree.png");
	textureBee.loadFromFile("./graphics/bee.png");
	textureCloud.loadFromFile("./graphics/cloud.png");

	// Create a sprite
	Sprite spriteBackground;
	Sprite spriteTree;
	Sprite spriteBee;
	const int NumMaxClouds = 3;
	CloudStructure spriteCloud[NumMaxClouds];

	for (int i = 0; i < NumMaxClouds; i++)
	{
		spriteCloud[i].dibuix.setTexture(textureCloud);
		spriteCloud[i].dibuix.setPosition(0, i * 250);
		spriteCloud[i].Active = false;
		spriteCloud[i].Speed = 0.0f;
	}

	


	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);
	spriteTree.setTexture(textureTree);
	spriteBee.setTexture(textureBee);



	/*spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);
	*/

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);
	spriteTree.setPosition(810, 0);
	spriteBee.setPosition(0, 800);

	/*
	spriteCloud1.setPosition(0, 0);
	spriteCloud2.setPosition(0, 250);
	spriteCloud3.setPosition(0, 500);
	*/

	bool beeActive = false;

	
	/*bool cloud1Active = false;
	bool cloud2Active = false;
	bool cloud3Active = false;*/

	float beeSpeed = 0.0f;

	/*float cloud1Speed = 0.0f;
	float cloud2Speed = 0.0f;
	float cloud3Speed = 0.0f;
	*/

	while (window.isOpen())
	{

		/*
		****************************************
		Handle the players input
		****************************************
		*/

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		/*
		****************************************
		Update the scene
		****************************************
		*/
		Time dt = reloj.restart();
		if (!beeActive) 
		{
			srand((int)time(0));
			beeSpeed = (rand() % 200) + 200;

			srand((int)time(0) * 10);
			float height = (rand() % 500) + 500;
			spriteBee.setPosition(2000, height);
			beeActive = true;
		}
		else {
			spriteBee.setPosition(
				spriteBee.getPosition().x -
				(beeSpeed * dt.asSeconds()), spriteBee.getPosition().y);
		}
		if (spriteBee.getPosition().x < -100) {
			beeActive = false;
		}

		for (int i = 0; i < NumMaxClouds; i++)
		{
			if (!spriteCloud[i].Active)
			{
				srand((int)time(0) * 10);
				spriteCloud[i].Speed = (rand() % 200);
				spriteCloud[i].dibuix.setPosition(-200, (rand() % 500));
				spriteCloud[i].Active = true;
			}
			else
			{
				spriteCloud[i].dibuix.setPosition(spriteCloud[i].dibuix.getPosition().x + (spriteCloud[i].Speed * dt.asSeconds()), spriteCloud[i].dibuix.getPosition().y);
				if (spriteCloud[i].dibuix.getPosition().x > Xmax)
				{
					spriteCloud[i].Active = false;
				}
			}
		}

		/*
		****************************************
		Draw the scene
		****************************************
		*/

		// Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);
		for (int i = 0; i < NumMaxClouds; i++) {
			window.draw(spriteCloud[i].dibuix);
		}
		window.draw(spriteTree);
		window.draw(spriteBee);
		

		// Show everything we just drew
		window.display();


	}

	return 0;
}
