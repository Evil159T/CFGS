#include <iostream>
using namespace std;
void EscriureFuncio(int n)
{
    int num = 1;
    int multi;
    for (multi = 1; multi <= n; ++multi)    //Es multiplica fins arribar al mateix numero donat
    {
        num = multi * num;

    }
    cout << endl;
    cout << "Es: " << num << endl;
}