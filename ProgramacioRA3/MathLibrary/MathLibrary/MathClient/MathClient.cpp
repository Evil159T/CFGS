// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
    double a;
    double b;

    cout << "Inserta 2 numeros, a i b, per fer operaci�ns amb ells:\n";
    cin >> a >> b;


    cout << "El resultat de a + b �s " <<
        MathLibrary::Arithmetic::Add(a, b) << std::endl;
    cout << "El resultat de a - b �s " <<
        MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
    cout << "El resultat de a * b �s " <<
        MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    cout << "El resultat de a / b �s " <<
        MathLibrary::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}