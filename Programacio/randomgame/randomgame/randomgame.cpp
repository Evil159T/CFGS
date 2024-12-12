#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{	
	srand((time(NULL)));		// Fa que el numero random que dona sigui diferent
	int rannum = rand() %100;	// Dona un numero random
	int respos = 0;				// Resposta que donara l'usuari
	int intents = 0;			// Numero de intents

	do {
		cout << "Digues un numero\n";		// demana un numero
		intents = intents + 1;				// Suma numero de intents 1
		cin >> respos;						// guarda el numero donat per l'usuari
		if (respos < rannum) {				// si es mes baix la resposta que el numero random	
			cout << "Masa baix\n";			
		}
		else if (respos > rannum) {			// si es mes alt  la resposta que el numero random	
			cout << "Masa alt\n";
		}
	} while (respos != rannum);				// si es igual la resposta que el numero random	
	cout << "Has guanyat era: " << rannum << " o has fet en " << intents <<" intents "<< endl; // diu que has guanyat el numero de intents y confirma el numero random que era
	return 0;
}