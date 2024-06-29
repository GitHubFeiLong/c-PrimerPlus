//
// Created by chenf on 2024/6/21.
//
#include <iostream>

int main()
{
    using namespace std;
    const int Months = 12;
    char * months[Months] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int sales[3][Months];
    int sum = 0;
    for (int i =0; i < 3; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            cout << "请输入 第" << i + 1 << " 年" << months[j] << " 的销量：";
            cin >> sales[i][j];
            sum += sales[i][j];
        }

    }
    cout << "累计销量：" << sum << endl;
    return 0;

    return 0;
}