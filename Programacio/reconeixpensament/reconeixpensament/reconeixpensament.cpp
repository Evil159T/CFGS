// deteccio edat per entrar instagram
// Author: Pau Sánchez Manzano (PSM)
// Cicle: CFGS DAM 1r


#include <iostream>
using namespace std;

int main()
{
    //Asignacio de variables
    int edat = 0;
    int edatMin = 16;
    int edatRes = 0;


    cout << "Que edat tens?\n";
    cin >> edat;
    if (edat > edatMin) {

        cout << "Felicitats pots accedir a instragram";


    }
    else {
        edatRes = edatMin - edat;
        cout << "Et quedan " << edatRes << " per poder accedir a instagram :c ";
        return 0;
    }


}
