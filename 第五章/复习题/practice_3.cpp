//
// Created by chenf on 2024/6/21.
//
#include <iostream>

int main()
{
    using namespace std;

    long double sum = 0;
    long double sum_temp = 0;
    double in;
    cin >> in;
    while (in != 0)
    {
        sum_temp = sum;
        sum += in;
        cout << sum << " = " << sum_temp << " + " << in << endl;
        cin >> in;
    }

    cout << "sum = " << sum << endl;
    return 0;
}