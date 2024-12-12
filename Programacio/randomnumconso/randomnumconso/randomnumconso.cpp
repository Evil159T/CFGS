#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
							// Assignacio de variables
	srand((time(NULL)));
	string respousu;
	int deade = 100;			
	int intents = 0;	
	int max = 100;
	int min = 0;
	bool continua = true;
	int rannum = 0;

	do {
		rannum = min + rand() % (max - min); // agafa un numero del min al max
	
		cout << "Es el " << rannum << " ?" << endl; // la cpu diu un numero
		cout << "Diges B si es masa baix o A si es masa alt\n"  << "B/A" << endl;
		intents = intents + 1;						// suma els intets
		cin >> respousu;							// la resposta del ususari de si es mes baix o mes alt
		if (respousu == "B" || respousu == "b") {	//Si es masa baix
			min = rannum + 1;						// cambia el rang minim
		}
		else if (respousu == "A" || respousu == "a") { //si es masa alt
			max = rannum - 1;						// cambia el rang maxim
		}
		else {
			continua = false;						//si no es ni masa baix ni mas aalt continua false surtira del bucle
		}
					
	} while (continua);				
	cout << "Has guanyat en: " << intents << " intents" << endl;
	return 0;
}