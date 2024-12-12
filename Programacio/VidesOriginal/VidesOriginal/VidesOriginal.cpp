// VidesOriginal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <string>

int Puntuacio = 0;
int VidesOriginal = 0;
int VidesCopia;
int main()
{

	cout << "Digam una puntuacio siusplau\n";
	cin >> Puntuacio;
	Puntuacio = Puntuacio + 100;
	cout << "Puntuacio = " << Puntuacio << endl;
	Puntuacio = Puntuacio + 100;
	cout << "Puntuacio = " << Puntuacio << endl;

	cout << "Diguem un numero de vidas\n";
	cin >> VidesOriginal;
	cout << "VidesOriginal = " << VidesOriginal << endl;
	VidesCopia = VidesOriginal;
	cout << "VidesCopia = " << VidesCopia << endl;
	cout << "Aqui es mostra ++VidesOriginal en la mateixa linea = " << ++VidesOriginal << endl;
	cout << "Aqui es mostra VidesCopia++ en la mateixa linea = " << VidesCopia++ << endl;
	cout << "Aqui es mostra el VidesCopia++ en la seguent linea = " << VidesCopia << endl;
	cout << VidesOriginal << " * 10 = ";
	VidesOriginal = VidesOriginal * 10;
	cout << VidesOriginal << endl;
	unsigned int a= 4294967295;
	cout << "la variable int unsigned esta en 4294967295 + 1 sera = ";
	a = a + 1;
	cout << a;





}