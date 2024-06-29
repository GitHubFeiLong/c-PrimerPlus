//
// Created by chenf on 2024/6/27.
//
#include <iostream>
#include "complex0.h"
int main()
{
    using namespace std;
    complex0 a(3.0, 4.0); // initialize to (3,4i)
    complex0 c;
    cout << "Enter a complex0 number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "complex0 conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex0 number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}