//
// Created by chenf on 2024/6/21.
//
#include <iostream>
#include <array>

int main()
{
    using namespace std;

    array<long double, 100> arr;
    arr[0] = arr[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        arr[i] = i * arr[i - 1];
    }

    cout << "100! = " << arr[99] << endl;
    return 0;
}