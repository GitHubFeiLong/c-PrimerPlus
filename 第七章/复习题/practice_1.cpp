//
// Created by chenf on 2024/6/24.
//
#include <iostream>

double method(double num1, double num2);

int main()
{
    using namespace std;
    double num1, num2;
    double avg;

    cout << "Enter tow number:";
    cin >> num1 >> num2;
    while (cin && num1 != 0 && num2 != 0)
    {
        avg = method(num1, num2);
        cout << num1 << "和" << num2 << "的调和平均数是" << avg << endl;
        cin >> num1 >> num2;
    }
    return 0;
}

double method(double num1, double num2)
{
    return 2.0 * num1 * num2 / (num1 + num2);
}