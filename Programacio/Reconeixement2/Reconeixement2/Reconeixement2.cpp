// Reconeixemnt 2
// Author: Pau Sánchez Manzano
// Cicle: CFGS DAM

#include <iostream>
using namespace std;
int main()
{
	int anyActu = 0;
	int anyUsu = 0;
	int edat = 0;

	cout << "Que any estem?\n";
	cin >> anyActu;
	cout << "En quin any has nascut?\n";
	cin >> anyUsu;
	edat = anyActu - anyUsu;
	if (edat <= 15) {

		cout << "Encara ets menor e ilegal, tens: " << edat << " anys.";

	}else if(edat == 16) {
		cout << "Ets menor de edat pero ja ets legal per algunes cosas a espanya, tens: " << edat << " anys.";
	}
	else if (edat >= 18) {
		cout << "Ja ets un adult, tens " << edat << " anys.";
	}
	return 0;
}

