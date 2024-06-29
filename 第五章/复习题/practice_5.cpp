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
    int sales[Months];
    int sum = 0;
    for (int i =0; i < Months; i++)
    {
        cout << "请输入 " << months[i] << " 的销量：";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "全年累计销量：" << sum << endl;
    return 0;
}