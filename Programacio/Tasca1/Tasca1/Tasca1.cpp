// Tasca1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Doneu la declaració per a dues variables anomenades peus i polzades. 
    //Ambdós  són de tipus int i ambdues s'han d'inicialitzar a zero en el declaració. 
    //Utilitzeu les dues alternatives d'inicialització.
        int peus;
        int polzades = 0;
        peus = 0;
    //Escriu un programa que contingui sentències que generin el valor de cinc o sis variables que s'han declarat, 
    //però no s'han inicialitzat. 
    //Compilar i executar  el programa. Quina és la sortida? Explicar.
        //surt error c47000 "se utilizó la variable local 'num1' sin inicializar" o sigui que no esta inizialitzada
        
        /*int num1;
        int num2;
        int num3;
        int num4;
        int num5;
        cout << num1 << num2 << num3 << num4 <<  num5;
        */
    //Introdueix un valor en ftemp (Fahrenheit) i convertir en ctemp (Celsius). A continuació, imprimiu el  Resultats. 
    //(Consell: la fórmula de conversió inversa és ctemp = (ftemp − 32) / 1.8.)
        cout << "posa el numero de farenheits que voleu traduir a celcius\n";
        double ftemp;
        cin >> ftemp;
        double ctemp = (ftemp - 32) / 1.8;

        cout << ctemp;




       
}


