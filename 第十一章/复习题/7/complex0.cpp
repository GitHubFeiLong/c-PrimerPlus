//
// Created by chenf on 2024/6/27.
//
#include <iostream>
#include "complex0.h"

complex0::complex0()
{
    real = imag = 0.0;
}

complex0::complex0(double r, double i)
{
    real = r;
    imag = i;
}

complex0::~complex0()
{

}

complex0 complex0::operator+(const complex0 &c) const
{
    return complex0(real + c.real, imag + c.imag);
}

complex0 complex0::operator-(const complex0 & c) const
{
    return complex0(real - c.real, imag - c.imag);
}

complex0 complex0::operator*(const complex0 & c) const
{
    return complex0(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

complex0 operator*(double d, const complex0 & c)
{
    return complex0(d * c.real, d * c.imag);
}

complex0 complex0::operator~() const
{
    return complex0(real, -imag);
}

std::istream & operator>>(std::istream & in, complex0 & c)
{
    using namespace std;
    cout << "real: ";
    cin >> c.real;
    cout << "imaginary: ";
    cin >> c.imag;
    return in;
}

std::ostream & operator<<(std::ostream & o, const complex0 & c)
{
    o << "(" << c.real << "," << c.imag << "i)" << std::endl;
    return o;
}