
// Include important C++ libraries here
#include <sstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

// Make code easier to type with "using namespace"
using namespace sf;
// Left or Right
enum class side { LEFT, RIGHT, NONE };
// Function declaration
void updateBranches(int seed, side branchPositions[]);

bool paused = true;




// Const declaration
const int Xmax = 1920;
const int Ymax = 1080;
const int NumMaxClouds = 3;
const int NumMaxBee = 10;
const float AXE_POSITION_LEFT = 850;
const float AXE_POSITION_RIGHT = 1075;

// Create a structure variable called Mycloud
struct CloudStructure {
	sf::Sprite dibuix;
	bool  Active;
	float Speed;
};
struct BeeStructure {
	sf::Sprite dibuix;
	bool  Active;
	float Speed;
};

const int NUM_BRANCHES = 6;
// Where is the player/branch? 



int main()
{
	
	Sprite branches[NUM_BRANCHES];
    side branchPositions[NUM_BRANCHES];
	// Create a video mode object
	VideoMode vm(Xmax, Ymax);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	// Make a tree sprite
	Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810, 0);
	// Make a tree2 sprite
	Texture textureTree2;
	textureTree2.loadFromFile("graphics/arbol.png");
	Sprite spriteTree2;
	spriteTree2.setTexture(textureTree2);
	spriteTree2.setPosition(1650, 0);

	// Prepare the bee
	Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	BeeStructure spriteBee[NumMaxBee];
	for (int b = 0; b < NumMaxBee; b++)
	{
		spriteBee[b].dibuix.setTexture(textureBee);
		spriteBee[b].dibuix.setPosition(0, 800);
		spriteBee[b].Active = false;
		spriteBee[b].Speed = 0.0f;

	}

	/*
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);
	*/



	// Is the bee currently moving?
	bool beeActive = false;

	// How fast can the bee fly
	float beeSpeed = 0.0f;

	// make 3 cloud sprites from 1 texture
	Texture textureCloud;

	// Load 1 new texture
	textureCloud.loadFromFile("graphics/Nube.png");
	

	// 3 New sprites withe the same texture
	CloudStructure spriteCloud[NumMaxClouds];
	
	for (int i = 0; i < NumMaxClouds; i++)
	{
		spriteCloud[i].dibuix.setTexture(textureCloud);
		spriteCloud[i].dibuix.setPosition(0, i * 250);
		spriteCloud[i].Active = false;
		spriteCloud[i].Speed = 0.0f;

	}

	



	// Variables to control time itself
	Clock clock;
	// Time bar
	RectangleShape timeBar;
	float timeBarStartWidth = 400;
	float timeBarHeight = 80;
	timeBar.setSize(Vector2f(timeBarStartWidth, timeBarHeight));
	timeBar.setFillColor(Color::Red);
	timeBar.setPosition((1920 / 2) - timeBarStartWidth / 2, 980);
	Time gameTimeTotal;
	float timeRemaining = 6.0f;
	float timeBarWidthPerSecond = timeBarStartWidth / timeRemaining;
	// Track whether the game is running
	bool paused = true;
	// Draw some text
	int score = 0;
	Text messageText;
	Text scoreText;


	// We need to choose a font
	Font font;
	font.loadFromFile("fonts/KOMIKAP_.ttf");

	// Declarar el texto para FPS
	Text fpsText;
	fpsText.setFont(font);
	fpsText.setCharacterSize(50);
	fpsText.setFillColor(Color::White);
	fpsText.setPosition(Xmax - 350, 20); // Colocar en la esquina superior derecha




	// Set the font to our message
	messageText.setFont(font);
	scoreText.setFont(font);

	// Assign the actual message
	messageText.setString("Press Enter to Start!");
	scoreText.setString("Score = 0");

	// Make it really big
	messageText.setCharacterSize(75);
	scoreText.setCharacterSize(100);

	// Choose a color
	messageText.setFillColor(Color::White);
	scoreText.setFillColor(Color::White);

	// Position the text
	FloatRect textRect = messageText.getLocalBounds();
	messageText.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	messageText.setPosition(Xmax / 2.0f, Ymax / 2.0f);
	scoreText.setPosition(20, 20);

	// Prepare 6 branches
	Texture textureBranch;
	textureBranch.loadFromFile("graphics/branch.png");


	// Set the texture for each branch sprite
	for (int i = 0; i < NUM_BRANCHES; i++) {
		branches[i].setTexture(textureBranch);
		branches[i].setPosition(-2000, -2000);
		// Set the sprite's origin to dead centre
		// We can then spin it round without changing its position
		branches[i].setOrigin(220, 20);
	}
	// Prepare the player
	Texture texturePlayer;
	texturePlayer.loadFromFile("graphics/Jugador.png");
	Sprite spritePlayer;
	spritePlayer.setTexture(texturePlayer);
	spritePlayer.setPosition(580, 690);


	// The player starts on the left
	side playerSide = side::LEFT;
	branchPositions[3] = side::NONE;


	// Prepare the gravestone
	Texture textureRIP;
	textureRIP.loadFromFile("graphics/tumba.png");
	Sprite spriteRIP;
	spriteRIP.setTexture(textureRIP);
	
	// Prepare the titan
	Texture textureTitan;
	textureTitan.loadFromFile("graphics/Titan.png");
	Sprite spriteTitan;
	spriteTitan.setTexture(textureTitan);
	spriteTitan.setPosition(90, 200);
	spriteTitan.setScale(0.5f, 0.5f);
	// Prepare the axe
	Texture textureAxe;
	textureAxe.loadFromFile("graphics/hacha.png");
	Sprite spriteAxe;
	spriteAxe.setTexture(textureAxe);
	spriteAxe.setPosition(600, 720);
	spriteAxe.setScale(-2.0f, 2.0f);

	// Prepare the flying log
	Texture textureLog;
	textureLog.loadFromFile("graphics/log.png");
	Sprite spriteLog;
	spriteLog.setTexture(textureLog);

	// Some other useful log related variables
	bool logActive = false;
	float logSpeedX = 1000;
	float logSpeedY = -1500;


	// Control the player input
	bool acceptInput = false;


	// Prepare the sound
	// The player chopping sound
	SoundBuffer chopBuffer;
	chopBuffer.loadFromFile("sound/chop.wav");
	Sound chop;
	chop.setBuffer(chopBuffer);

	// Out of time

	// random seed
	srand((int)time(0) * 10);
	
	//game loop
	while (window.isOpen())
	{
	

		/*
		****************************************
		Handle the players input
		****************************************
		*/
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::KeyReleased && !paused)
			{
				// Listen for key presses again
				acceptInput = true;
				// hide the axe
				spriteAxe.setPosition(2000, spriteAxe.getPosition().y);
			}
		}


		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		// Start the game
		if (Keyboard::isKeyPressed(Keyboard::Enter))
		{
			paused = false;
			// Reset
			score = 0;
			timeRemaining = 6;
			//Make all the branches disappear
			for (int i = 1; i < NUM_BRANCHES; i++)
			{
				branchPositions[i] = side::NONE;
			}
			// Make sure the gravestone is hidden
			spriteRIP.setPosition(675, 2000);
			// Move the player into position
			spritePlayer.setPosition(580, 690);
			acceptInput = true;

			



		}
			// Reset the time and the score

			// Make all the branches disappear

			// Make sure the gravestone is hidden

			// Move the player into position

		// Wrap the player controls to
		// Make sure we are accepting input
		if (acceptInput)
		{
			// More code here next...
		


			// First handle pressing the right cursor key
			if (Keyboard::isKeyPressed(Keyboard::Right))
			{

				// Make sure the player is on the right
				playerSide = side::RIGHT;
				score++;
				// Update the score text
				std::stringstream ss;
				ss << "Score = " << score;
				scoreText.setString(ss.str());


				// Add to the amount of time remaining
				timeRemaining += (2 / score) + .15;
				spriteAxe.setPosition(AXE_POSITION_RIGHT,
				spriteAxe.getPosition().y);
				spritePlayer.setPosition(1200, 690);
				spriteAxe.setScale(2.0f, 2.0f);
				


				// update the branches
				updateBranches(score, branchPositions);

		
				// set the log flying to the left
				spriteLog.setPosition(810, 690);
				logSpeedX = -5000;
				logActive = true;
				acceptInput = false;
				// Play a chop sound
				chop.play();
			}
				

			// Handle the left cursor key
			if (Keyboard::isKeyPressed(Keyboard::Left))
			{

				// Make sure the player is on the right
				playerSide = side::LEFT;
				score++;
				// Update the score text
				std::stringstream ss;
				ss << "Score = " << score;
				scoreText.setString(ss.str());


				// Add to the amount of time remaining
				timeRemaining += (2 / score) + .15;
				spriteAxe.setPosition(AXE_POSITION_LEFT,
				spriteAxe.getPosition().y);
				spritePlayer.setPosition(580, 690);
				spriteAxe.setScale(-2.0f, 2.0f);
				


				// update the branches
				updateBranches(score, branchPositions);

				
				// set the log flying to the left
				spriteLog.setPosition(810, 720);
				logSpeedX = 5000;
				logActive = true;
				acceptInput = false;
				// Play a chop sound
				chop.play();
			}
		}
				// Make sure the player is on the left

				// Add to the amount of time remaining

				// update the branches
			

				// set the log flying

				



		/*
		****************************************
		Update the scene
		****************************************
		*/
		if (!paused)
		{
		// Measure time
		Time dt = clock.restart();
		float fps = 1.0f / dt.asSeconds();
		std::stringstream ss;
		ss << "FPS: " << static_cast<int>(fps);  // Convertir el valor de fps a entero
		fpsText.setString(ss.str());
		// Subtract from the amount of time remaining
		timeRemaining -= dt.asSeconds();

		if (timeRemaining > 6.0f) {
			timeRemaining = 6.0f;
		}
		// size up the time bar
		timeBar.setSize(Vector2f(timeBarWidthPerSecond *
		timeRemaining, timeBarHeight));
		if (timeRemaining <= 0.0f) {
			// Pause the game
			paused = true;
			// Change the message shown to the player
			messageText.setString("Out of time!!");

			//Reposition the text based on its new size
			FloatRect textRect = messageText.getLocalBounds();
			messageText.setOrigin(textRect.left + textRect.width / 2.0f,
			textRect.top + textRect.height / 2.0f);
			messageText.setPosition(1920 / 2.0f, 1080 / 2.0f);



		}
			// Play the out of time sound


		// Setup the bee
		for (int b = 0; b < NumMaxBee; b++)
		{
			if (!spriteBee[b].Active)
			{
				spriteBee[b].Speed = (250+rand() % 800);
				spriteBee[b].dibuix.setPosition(2000, (500 + rand() % 750));
				spriteBee[b].Active = true;


			}
			else
			{
				spriteBee[b].dibuix.setPosition(spriteBee[b].dibuix.getPosition().x - (spriteBee[b].Speed * dt.asSeconds()),
					spriteBee[b].dibuix.getPosition().y);
				if (spriteBee[b].dibuix.getPosition().x < -100)
				{
					spriteBee[b].Active = false;
				}

			}
		}

		// Manage the clouds
		for (int i = 0; i < NumMaxClouds; i++)
		{
			if (!spriteCloud[i].Active)
			{
				spriteCloud[i].Speed = (rand() % 200);
				spriteCloud[i].dibuix.setPosition(-200, (rand() % 500));
				spriteCloud[i].Active = true;


			}
			else
			{
				spriteCloud[i].dibuix.setPosition(spriteCloud[i].dibuix.getPosition().x + (spriteCloud[i].Speed * dt.asSeconds()),
					spriteCloud[i].dibuix.getPosition().y);
				if (spriteCloud[i].dibuix.getPosition().x > Xmax)
				{
					spriteCloud[i].Active = false;
				}

			}
		}


		
		

		// update the branch sprites
		for (int i = 0; i < NUM_BRANCHES;
			i++)
		{
			float height = i * 150;
			if (branchPositions[i] == side::LEFT)
			{
				// Move the sprite to the left side
				branches[i].setPosition(610, height);
				// Flip the sprite round the other way
				branches[i].setRotation(180);
			}
			else if (branchPositions[i] == side::RIGHT)
			{
				// Move the sprite to the right side
				branches[i].setPosition(1330, height);
				// Set the sprite rotation to normal
				branches[i].setRotation(0);
			}
			else
			{
				// Hide the branch
				branches[i].setPosition(3000, height);
			}
		}

		// Handle a flying log				

		if (logActive)
		{

			spriteLog.setPosition(
				spriteLog.getPosition().x + (logSpeedX * dt.asSeconds()),
				spriteLog.getPosition().y + (logSpeedY * dt.asSeconds())
			);

			// Has the insect reached the right hand edge of the screen?
			if (spriteLog.getPosition().x < -100 || spriteLog.getPosition().x > 2000)
			{
				// Set it up ready to be a whole new cloud next frame
				logActive = false;
				spriteLog.setPosition(810, 720);
			}
		}
		// has the player been squished by a branch?
		if (branchPositions[5] == playerSide)
		{
			
			// death
			paused = true;
			acceptInput = false;
			// Draw the gravestone
			window.draw(spriteRIP);
			spriteRIP.setPosition(525, 760);
			// hide the player
			spritePlayer.setPosition(2000, 660);
			// Change the text of the message
			messageText.setString("Has mort :c!!!!!");
			// Center it on the screen
			FloatRect textRect = messageText.getLocalBounds();
			messageText.setOrigin(textRect.left + textRect.width / 2.0f,
				textRect.top + textRect.height / 2.0f);
			messageText.setPosition(1920 / 2.0f, 1080 / 2.0f);
			// Play the death sound
		}


		
		}
	// End if(!paused)

	 /*
	 ****************************************
	 Draw the scene
	 ****************************************
	 */

	 // Clear everything from the last frame
		window.clear();

		// Draw our game scene here
		window.draw(spriteBackground);

		// Draw the clouds
		for (int i = 0; i < NumMaxClouds; i++)
		{

			window.draw(spriteCloud[i].dibuix);
		}


		// Draw the branches
		for (int i = 0; i < NUM_BRANCHES; i++) {
			window.draw(branches[i]);
		}


		// Draw the tree
		window.draw(spriteTree);
		// Draw the player
		window.draw(spritePlayer);
		// Draw the Titan
		window.draw(spriteTitan);
		// Draw the axe
		window.draw(spriteAxe);
		// Draw the tree2
		window.draw(spriteTree2);
		


		// Draw the flying log
		window.draw(spriteLog);
		// Draw the gravestone
		window.draw(spriteRIP);

		// Drawraw the bee
		for (int b = 0; b < NumMaxBee; b++)
		{

			window.draw(spriteBee[b].dibuix);
		}

		// Draw the score
		window.draw(scoreText);
		if (paused)
		{
			window.draw(messageText);
		}
		// Draw the timebar
		window.draw(timeBar);
		window.draw(fpsText);

			// Draw our message

		// Show everything we just drew
		window.display();


	}

	return 0;
}

// Function definition
void updateBranches(int seed, side branchPositions[])
{
	// Move all the branches down one place
	for (int j = NUM_BRANCHES - 1; j > 0; j--) {
		branchPositions[j] = branchPositions[j - 1];
	}
	// Spawn a new branch at position 0
// LEFT, RIGHT or NONE
	srand((int)time(0) + seed);
	int r = (rand() % 5);
	switch (r) {
	case 0:
		branchPositions[0] = side::LEFT;
		break;
	case 1:
		branchPositions[0] = side::RIGHT;
		break;
	default:
		branchPositions[0] = side::NONE;
		break;
	}

}
