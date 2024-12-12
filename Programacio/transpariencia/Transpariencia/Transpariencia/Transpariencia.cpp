// Transpariencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "funcions.h"
#include "Primo.h"
using namespace std;

void main()
{

	int i = 0;
	while (i != 3) {
	cout << "1: Saber el seu factorial\n";
	cout << "2: Per saber si es Primo\n";				//Petit menu per escollir
	cout << "3: Es finalitza el programa...\n";
	cin >> i;																					
	switch (i){													//Comença el switch						
	case 1:																			//case 1 crida la funcio delf actorial			
	int n;																						
	cout << "Digues un num per saber el seu factorial\n";
	cin >> n;
	EscriureFuncio(n);
	break;		
	case 2:																			//case 2 crida 
	int p;
	cout << "Digues un numero per saber si es primer \n";
	cin >> p;
	bool resultatprimer = EscriurePrimo(p);											//Retorna la boleana que decideix 
	if (resultatprimer){
		cout << p << " Es primo\n";
	}
	else {
		cout << p << " No es primo\n";
	}

	break;
	}
	}
	cout << "Finalitzant...";

}

