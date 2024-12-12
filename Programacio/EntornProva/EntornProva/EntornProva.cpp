// EntornProva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <random>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
bool tr = true;
int blackX = 50;
int blackY = 50;

int contador = 0;

int main()
{
	RenderWindow window(VideoMode(1920, 1080), "Prova");

	window.setFramerateLimit(60);



	RectangleShape cuaB(Vector2f(1820, 980));
	cuaB.setFillColor(Color::Black);
	cuaB.setPosition(Vector2f(50, 50));

	RectangleShape cuaR(Vector2f(1820, 50));
	cuaR.setFillColor(Color::Red);
	cuaR.setPosition(Vector2f(50, 100));

	RectangleShape cuaR2(Vector2f(50, 980));
	cuaR2.setFillColor(Color::Red);
	cuaR2.setPosition(Vector2f(100, 50));

	RectangleShape cuaY(Vector2f(25, 50));
	cuaY.setFillColor(Color::Yellow);
	cuaY.setPosition(Vector2f(950, 580));


	//Arbol Navidad
	ConvexShape triangle;
	triangle.setPointCount(3);
	triangle.setPoint(0, Vector2f(-100, 0));
	triangle.setPoint(1, Vector2f(0, -80));
	triangle.setPoint(2, Vector2f(100, 0));
	triangle.setFillColor(Color::Green);
	triangle.setPosition(Vector2f(960, 540));

	ConvexShape triangle2;
	triangle2.setPointCount(3);
	triangle2.setPoint(0, Vector2f(-90, 0));
	triangle2.setPoint(1, Vector2f(0, -80));
	triangle2.setPoint(2, Vector2f(90, 0));
	triangle2.setFillColor(Color::Green);
	triangle2.setPosition(Vector2f(960, 500));
	ConvexShape triangle3;
	triangle3.setPointCount(3);
	triangle3.setPoint(0, Vector2f(-110, 0));
	triangle3.setPoint(1, Vector2f(0, -80));
	triangle3.setPoint(2, Vector2f(110, 0));
	triangle3.setFillColor(Color::Green);
	triangle3.setPosition(Vector2f(960, 580));
	//==========================================================================================================

	//Bola Arbol

	CircleShape circle(15);
	circle.setFillColor(Color::Red);
	circle.setPosition(930, 500);
	circle.setOrigin(Vector2f(circle.getRadius(),
	circle.getRadius()));

	RectangleShape cuaY2(Vector2f(5, 10));
	cuaY2.setFillColor(Color::Yellow);
	cuaY2.setPosition(Vector2f(927, 480));

	CircleShape circle2(15);
	circle2.setFillColor(Color::Red);
	circle2.setPosition(980, 550);
	circle2.setOrigin(Vector2f(circle.getRadius(),
	circle2.getRadius()));

	RectangleShape cuaY3(Vector2f(5, 10));
	cuaY3.setFillColor(Color::Yellow);
	cuaY3.setPosition(Vector2f(978, 530));


	//==========================================================================================================

	CircleShape snow(2);
	snow.setFillColor(Color::White);
	snow.setPosition(980, 550);
	snow.setOrigin(Vector2f(circle.getRadius(),
	snow.getRadius()));

	CircleShape snow2(2);
	snow2.setFillColor(Color::White);
	snow2.setPosition(1020, 850);
	snow2.setOrigin(Vector2f(circle.getRadius(),
	snow2.getRadius()));

	CircleShape snow3(2);
	snow3.setFillColor(Color::White);
	snow3.setPosition(780, 280);
	snow3.setOrigin(Vector2f(circle.getRadius(),
	snow3.getRadius()));

	CircleShape snow4(2);
	snow4.setFillColor(Color::White);
	snow4.setPosition(356, 984);
	snow4.setOrigin(Vector2f(circle.getRadius(),
	snow4.getRadius()));

	CircleShape snow5(2);
	snow5.setFillColor(Color::White);
	snow5.setPosition(255, 740);
	snow5.setOrigin(Vector2f(circle.getRadius(),
	snow5.getRadius()));

	CircleShape snow6(2);
	snow6.setFillColor(Color::White);
	snow6.setPosition(255, 740);
	snow6.setOrigin(Vector2f(circle.getRadius(),
	snow6.getRadius()));

	CircleShape snow7(2);
	snow7.setFillColor(Color::White);
	snow7.setPosition(255, 740);
	snow7.setOrigin(Vector2f(circle.getRadius(),
	snow7.getRadius()));

	CircleShape snow8(2);
	snow8.setFillColor(Color::White);
	snow8.setPosition(255, 740);
	snow8.setOrigin(Vector2f(circle.getRadius(),
	snow8.getRadius()));




	/*RectangleShape rect(Vector2f(50, 50));
	rect.setFillColor(Color::Red);
	rect.setOrigin(Vector2f(25, 25));
	rect.setPosition(Vector2f(50, 50));


	RectangleShape rect2(Vector2f(50, 50));
	rect2.setFillColor(Color::Red);
	rect2.setOrigin(Vector2f(25, 25));
	rect2.setPosition(Vector2f(100, 100));

	RectangleShape rect3(Vector2f(50, 50));
	rect3.setFillColor(Color::Black);
	rect3.setOrigin(Vector2f(25, 25));
	rect3.setPosition(Vector2f(100, 50));

	RectangleShape rect4(Vector2f(50, 50));
	rect4.setFillColor(Color::Black);
	rect4.setOrigin(Vector2f(25, 25));
	rect4.setPosition(Vector2f(50, 100));*/


	while (window.isOpen())
	{

		window.clear(Color::Blue);
		window.draw(cuaB);
		window.draw(cuaR);
		window.draw(cuaR2);
		window.draw(triangle);
		window.draw(triangle2);
		window.draw(triangle3);
		window.draw(cuaY);
		window.draw(cuaY2);
		window.draw(circle);
		window.draw(cuaY3);
		window.draw(circle2);
		window.draw(snow);
		window.draw(snow2);
		window.draw(snow3);
		window.draw(snow4);
		window.draw(snow5);
		






		/*window.draw(rect);
		window.draw(rect2);
		window.draw(rect3);
		window.draw(rect4);*/
		window.display();

	}

	return 0;
}
