// If.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int score = 0, hihgscore = 800;



    cout << "HighScore =" << hihgscore << "\n";
    cout << "Que puntuacio es la que has fet?\n";
    cin >> score;

    if (score < 800) 
    {
        cout << "Vaya es menos que el record\n";


    }
    if (score == 800)
    {
        cout << "Es igual que el record\n";
        


    }
    if (score > 800)
    {
        cout << "Nuevo record\n";
        hihgscore = score;
        cout << "El nuevo highscore es " << hihgscore << "\n";


    }
    
}


