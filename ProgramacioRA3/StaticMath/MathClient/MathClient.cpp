// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h"
using namespace std;

int main()
{
    double a = 7.4;
    int b = 99;
    int z;
    int o;
    cout << "Digues un numero perque sigui Z\n";
    cin >> z;
    cout << "Digues un numero perque sigui O\n";
    cin >> o;

    cout << "a + b = " <<
        MathLibrary::Arithmetic::Add(a, b) << endl;
    cout << "a - b = " <<
        MathLibrary::Arithmetic::Subtract(a, b) << endl;
    cout << "a * b = " <<
        MathLibrary::Arithmetic::Multiply(a, b) << endl;
    cout << "a / b = " <<
        MathLibrary::Arithmetic::Divide(a, b) << endl;
    cout << "z + o = " <<
        MathLibrary::Arithmetic::PauSum(z, o) << endl;
    cout << "z - o = " <<
        MathLibrary::Arithmetic::PauRest(z, o) << endl;
    cout << "z * o = " <<
        MathLibrary::Arithmetic::PauMultiply(z, o) << endl;
    cout << "z / o = " <<
        MathLibrary::Arithmetic::PauDivide(z, o) << endl;

    return 0;
}