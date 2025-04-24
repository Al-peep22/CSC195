#include "fraction.h"

namespace mathlib {
    template<typename T>
    void Fraction<T>::validDenominator() {
        if (denominator == 0) {
            throw std::invalid_argument("Denominator cannot be zero."); // AI Helped Me Here
        }
    }

    template<typename T>
    Fraction<T>::Fraction(T num, T denom) : numerator{ num }, denominator{ denom } {
        validDenominator();
        *this = Simplify();
    }

    template<typename T>
    Fraction<T> Fraction<T>::Simplify() const {
        //# Find the greatest common divisor(GCD)
        T gcd = findGCD(abs(numerator), abs(denominator));

            //# Divide both numerator and denominator by the GCD
        T simplifiedNumerator = numerator / gcd;
        T simplifiedDenominator = denominator / gcd;

            //# Handle sign(keep sign in numerator)
        if (denominator < 0) {
            simplifiedNumerator = -simplifiedNumerator;
            simplifiedDenominator = -simplifiedDenominator;
        }

        return Fraction(simplifiedNumerator, simplifiedDenominator);
    }

    template<typename T>
    double Fraction<T>::ToFloat() const {
        return static_cast<double>(numerator) / denominator;
    }

    template<typename T>
    Fraction<T> Fraction<T>::operator + (const Fraction<T>& other) const {
        // 3/4 + 1/8 == 7/8
        return Fraction(numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator).Simplify();
    }

    template<typename T>
    Fraction<T> Fraction<T>::operator - (const Fraction<T>& other) const {
        // 3/4 - 1/8 == 5/8
        return Fraction(numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator).Simplify();
    }

    template<typename T>
    Fraction<T> Fraction<T>::operator * (const Fraction<T>& other) const {
        // 3/4 * 1/8 == 3/32
        return Fraction(numerator * other.numerator, denominator * other.denominator).Simplify();
    }

    template<typename T>
    Fraction<T> Fraction<T>::operator / (const Fraction<T>& other) const {
        // 3/4  /  1/8 == 4/24 == 1/6
        if (other.numerator == 0) {
            throw std::invalid_argument("Cannot divide by zero.");
        }
        return Fraction(numerator * other.denominator, denominator * other.numerator).Simplify();
    }

    template<typename T>
    bool Fraction<T>::operator == (const Fraction<T>& other) const {
        // 3/4 == 1/8 -> false
        return numerator * other.denominator == other.numerator * denominator;
    }


    template<typename T>
    bool Fraction<T>::operator != (const Fraction<T>& other) const {
        // 3/4 != 1/8 -> true
        return !(*this == other);
    }


    template<typename T>
    bool Fraction<T>::operator < (const Fraction<T>& other) const {
        // 3/4 < 1/8 -> false
        return numerator * other.denominator < other.numerator * denominator;
    }

    template<typename T>
    bool Fraction<T>::operator > (const Fraction<T>& other) const {
        // 3/4 > 1/8 -> true
        return numerator * other.denominator > other.numerator * denominator;
    }



    template<typename T>
    bool Fraction<T>::operator <= (const Fraction<T>& other) const {
        // 3/4 <= 1/8 -> false
        return !(*this > other);
    }

    template<typename T>
    bool Fraction<T>::operator >= (const Fraction<T>& other) const {
        // 3/4 >= 1/8 -> true
        return !(*this < other);
    }

    template<typename T>
    std::ostream& operator << (std::ostream& os, const Fraction<T>& frac) {
        // cout << 3/4
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }


    template<typename T>
    std::istream& operator >> (std::istream& is, Fraction<T>& frac) {
        // cin >> 3/4
        //Used help from AI in this method
        char slash;
        is >> frac.numerator >> slash >> frac.denominator;
        frac.validateDenominator();
        frac = frac.Simplify();
        return is;
    }
}