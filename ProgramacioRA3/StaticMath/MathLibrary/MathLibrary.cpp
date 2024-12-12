// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "MathLibrary.h"

namespace MathLibrary
{
    double Arithmetic::Add(double a, double b)
    {
        return a + b;
    }

    double Arithmetic::Subtract(double a, double b)
    {
        return a - b;
    }

    double Arithmetic::Multiply(double a, double b)
    {
        return a * b;
    }

    double Arithmetic::Divide(double a, double b)
    {
        return a / b;
    }
    int  Arithmetic::PauSum(int z,int o)
    {
        return z + o;
    }
    int  Arithmetic::PauRest(int z, int o)
    {
        return z - o;
    }
    int  Arithmetic::PauMultiply(int z, int o)
    {
        return z * o;
    }
    int  Arithmetic::PauDivide(int z, int o)
    {
        return z / o;
    }
}