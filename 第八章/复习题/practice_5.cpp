//
// Created by chenf on 2024/6/25.
//
#include <iostream>
using namespace std;
template <typename T>
T max5(const T t1[]);
int main()
{
    int ints[5] = {1, 4, 2, 7, 3};
    double doubles[5] = {2.3, 5.2, 4.4, 9.2, 9.20001};

    cout << "ints max value = " << max5(ints) << endl;
    cout << "doubles max value = " << max5(doubles) << endl;
    return 0;
}

template <typename T>
T max5(const T t1[])
{
    T max = t1[0];
    for (int i = 1; i < 5; i++)
    {
        max = max > t1[i] ? max : t1[i];
    }

    return max;
}