
#include <iostream>
#include <string.h> // For strcmp
#include <stdlib.h> // For atoi
using namespace std;
void main(void)
{
	int pos = 0;
	string paraula1, paraula2, paraula3, paraula4;
	char lletra1;
	char lletra;
	cout << "Escriu una frase de 3 paraules" << endl;
	cout << "La frase es: ";
	cin >> paraula1 >> paraula2 >> paraula3;
	string totalParaula = paraula1 + " " + paraula2 + " " + paraula3;
	int numLletras = totalParaula.size();
	cout << "El numero de caracters que te la frase es: " << numLletras << endl;
	char firstPos = totalParaula[0];
	cout << "A la posicio 0 esta la lletra: " << firstPos << endl;
	cout << "Digues una lletra que vulguis a la posicio 0: ";
	cin >> lletra1;
	totalParaula[0] = lletra1;
	cout << "Cambiant la lletra " << firstPos << " per la lletra " << lletra1 << endl;
	cout << "La frase ara es: " << totalParaula << endl;
	do {
			
		lletra = totalParaula[pos];		
		cout << "El caracter a la posicio " << pos << "es: " << lletra << endl;
		pos = pos + 1;
	
	} while (pos < totalParaula.length());
	cout << "Digues una paraula: ";
	cin >> paraula4;
	if (paraula4 == paraula1 || paraula4 == paraula2 || paraula4 == paraula3) {
		cout << "La paraula: " << paraula4 << " Si existeix." << endl;
	}
	else {
		cout << "La paraula: " << paraula4 << " No existeix." << endl;
	}
	


}
