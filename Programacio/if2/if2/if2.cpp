// if2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{

    int nota = 0, hihgscore = 800;



    cout << "di un numero del 0 al 10\n";
    
    cin >> nota;

    if (nota <= 4)
    {
        cout << "F suspendiste XD \n";


    }else if (nota <= 9) 
    {
        cout << "Boff aprobaste \n";
    }
    else if (nota == 10) {
        cout << "DIOOOOOOOOOOOOOOOOOOOOOOOOOOOOS\n";
    }
    else {
        cout << "aquesta nota no existeix bro ._.\n";
    }








}

