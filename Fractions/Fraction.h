#pragma once

#include <iostream>
#include <numeric> // Got some help from AI here

namespace mathlib {
    template<typename T>
    class Fraction {

    public:
        Fraction(T num, T denom);
        Fraction<T> Simplify() const;
        double ToFloat() const;

        //getter and setters
        T getNumerator() { return numerator; }
        T getDenominator() { return denominator; }
        void setNumerator(T num) { numerator = num; }
        void setDenominator(T denum) { denominator = denum; validDenominator(); }

        //arithmetic operators
        Fraction<T> operator + (const Fraction<T>& other) const;
        Fraction<T> operator - (const Fraction<T>& other) const;
        Fraction<T> operator * (const Fraction<T>& other) const;
        Fraction<T> operator / (const Fraction<T>& other) const;

        //comparison oerators
        bool operator == (const Fraction<T>& other) const;
        bool operator != (const Fraction<T>& other) const;
        bool operator < (const Fraction<T>& other) const;
        bool operator > (const Fraction<T>& other) const;
        bool operator <= (const Fraction<T>& other) const;
        bool operator >= (const Fraction<T>& other) const;

        // stream operators
        friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& frac);
        friend std::istream& operator>>(std::istream& is, Fraction<T>& frac);

    private:
        T numerator;
        T denominator;

        void validDenominator();
    };
}