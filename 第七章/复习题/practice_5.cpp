//
// Created by chenf on 2024/6/25.
//
#include <iostream>

unsigned long long method(int num);

int main()
{
    using namespace std;
    int num;
    while(true)
    {
        if (cin >> num)
        {
            cout << num << "! = " << method(num) << endl;
            continue;
        }
        break;
    }
    return 0;
}

unsigned long long method(int num)
{
    if (num <= 1)
        return 1;
    return num * method(num - 1);
}