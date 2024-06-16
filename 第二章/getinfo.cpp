//
// Created by Administrator on 2024/6/15.
//
#include <iostream>

using namespace std;

int main()
{
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are tow more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}