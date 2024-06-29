//
// Created by chenf on 2024/6/21.
//
#include <iostream>

int main()
{
    using namespace std;
    int num1, num2;
    int sum = 0;
    cout << "Please enter two number:";
    cin >> num1 >> num2;
    cout << "输入的两个数是：num1 = " << num1 << ". num2 = " << num2 << endl;
    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}