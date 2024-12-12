// MathLibrary.h
#pragma once

namespace MathLibrary
{
    class Arithmetic
    {
    public:
        // Returns a + b
        static double Add(double a, double b);

        // Returns a - b
        static double Subtract(double a, double b);

        // Returns a * b
        static double Multiply(double a, double b);

        // Returns a / b
        static double Divide(double a, double b);

        //Returns z + o
        static int PauSum(int z, int o);

        //Returns z + o
        static int PauRest(int z, int o);

        //Returns z + o
        static int PauMultiply(int z, int o);

        //Returns z + o
        static int PauDivide(int z, int o);
    };
}