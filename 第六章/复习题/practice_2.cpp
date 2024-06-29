//
// Created by chenf on 2024/6/24.
//
#include <iostream>
#include <array>

int main()
{
    using namespace std;

    array<double ,10> arr;
    double donation;
    int count = 0;
    double sum = 0.0;
    double avg = 0.0;
    int gtAvgCount = 0;

    cout << "Please enter a double value:";
    for (int i = 0; i < 10; i++)
    {
        while (!(cin >> donation))
        {
            break;
//            cin.clear();
//            while (cin.get() != '\n')
//                continue;
        }
        arr[i] = donation;
        ++count;
        sum += donation;
        cout << "next value:";
    }

    if (count > 0)
    {
        avg = sum / count;
        for (int i = 0; i < count; i++)
        {
            if (arr[i] > avg)
                ++gtAvgCount;
        }
    }

    cout << "avg :" << avg << endl;
    cout << "gtAvgCount :" << gtAvgCount << endl;

    return 0;
}