//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;

double fun(double);

int main()
{
    cout << "Enter the number of light years:";
    double light_years;
    cin >> light_years;
    double result = fun(light_years);
    cout << light_years << " light years = " << result << " astronomical units." << endl;
    return 0;
}

double fun(double n)
{
    return n * 63240;
}