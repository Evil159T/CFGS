#include <iostream>
using namespace std;
void EscriureCadena(char Cadena[])
{
    int num = 1;
    int multi;
    int n;
    cout << "digues un num\n";
    cin >> n;
    for (multi = 1; multi <= n; ++multi)
    {
        num = multi * num;
        //cout << multi;

    }
    int solucio = num;
    cout << endl;
    cout << "Es: " << solucio;
}