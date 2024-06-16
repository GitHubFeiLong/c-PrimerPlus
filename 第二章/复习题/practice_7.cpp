//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;
void fun(int hours, int minutes);

int main()
{
    int hours, minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;

    fun(hours, minutes);

    return 0;
}

void fun(int hours, int minutes)
{
    cout << hours << ":" << minutes << endl;
}