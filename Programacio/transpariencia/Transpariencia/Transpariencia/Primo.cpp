#include <iostream>
using namespace std;
bool EscriurePrimo(int p)
{
	int resultat_p;
	int primo;
	for (primo = p - 1; primo > 1; primo--)			//no calcula ni el mateix numero ni el numero 1 sino seria sempre false
	{
		resultat_p = p % primo;
		if (resultat_p == 0) {
			return false;
		}

	}
	return true;
	
}