// if2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{

    int nota = 0, hihgscore = 800;



    cout << "di un numero del 0 al 10\n";

    cin >> nota;

    switch (nota) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        cout << "Suspens " << endl;
        break;
    case 5:
    case 6:
        cout << "Aprobat " << endl;
        break;
    case 7:
    case 8:
        cout << "Notable " << endl;
        break;
    case 9:
        cout << "Sobresaliente " << endl;
        break;
    case 10:
        cout << "MATRICULA " << endl;
        break;
    DEFAULT:
        cout << "Nota inexistent " << endl;
        

   }








}
