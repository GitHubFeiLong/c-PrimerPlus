//
// Created by chenf on 2024/6/27.
//

#ifndef C__PRIMERPLUS_COMPLEX0_H
#define C__PRIMERPLUS_COMPLEX0_H
#include <iostream>

class complex0
{
private:
    double real;
    double imag;
public:
    complex0();
    complex0(double r, double i);
    ~complex0();
    complex0 operator+(const complex0 & c) const;
    complex0 operator-(const complex0 & c) const;
    complex0 operator*(const complex0 & c) const;
    friend complex0 operator*(double d, const complex0 & c);
    complex0 operator~() const;
    friend std::istream & operator>>(std::istream & i, complex0 & c);
    friend std::ostream & operator<<(std::ostream & o, const complex0 & c);
};


#endif //C__PRIMERPLUS_COMPLEX0_H
