//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;
double fun(double);

int main()
{
    cout << "Please enter a Celsius value:";
    double celsius;
    cin >> celsius;
    double degrees = fun(celsius);
    cout << celsius << " degrees Celsius is " << degrees << " Fahrenheit." << endl;

    return 0;
}

double fun(double celsius)
{
    return celsius * 1.8 + 32;
}