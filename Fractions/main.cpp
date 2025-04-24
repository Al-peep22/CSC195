#include <iostream>
#include "fraction.h"
using namespace mathlib;
int main() {

    Fraction<int> fraction1(18, 5);
    std::cout << "Fraction 1: " << fraction1 << "\n";

    Fraction<int> fraction2(15, 6);
    std::cout << "Fraction 2: " << fraction2 << "\n";
    std::cout << "Simplify fraction2: " << fraction2.Simplify() << "\n";

    std::cout << fraction1 << " == " << fraction2 << " ? " << (fraction1 == fraction2) << "\n";
    std::cout << fraction1 << " > " << fraction2 << " ? " << (fraction1 > fraction2) << "\n";

    std::cout << fraction1 << " + " << fraction2 << " = " << (fraction1 + fraction2) << "\n";
    std::cout << fraction1 << " * " << fraction2 << " = " << (fraction1 * fraction2) << "\n";


    Fraction<int> fraction3(1, 1); // Ensure denominator is not zero
    int num = 1;
    int denum = 1;

    std::cout << "Enter a numerator: ";
    std::cin >> num;
    fraction3.setNumerator(num);

    std::cout << "Enter a denominator: ";
    std::cin >> denum;

    // Set denominator **before** validation to avoid errors
    fraction3.setDenominator(denum);
    std::cout << "You entered: " << fraction3 << "\n";
    std::cout << "Floating-point value: " << fraction3.ToFloat() << "\n";
    return 0;
}