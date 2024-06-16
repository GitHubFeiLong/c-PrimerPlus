//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your age:";
    int age;
    cin >> age;
    int months = 12 * age;
    cout << "Your age in months is " << months << endl;

    return 0;
}