//
// Created by chenf on 2024/6/20.
//
#include <iostream>

/*
 * 编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似
 * <pre>
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 * </pre>
 */
int main()
{
    using namespace std;

    long long seconds;
    cout << "Enter the number of seconds：";
    cin >> seconds;
    int days, hours, minutes, seconds1;
    // 方式一
//    days = seconds / (60 * 60 * 24);
//    hours = (seconds - (days * 60 * 60 * 24)) / (60 * 60);
//    minutes = (seconds - days * 60 * 60 * 24 - hours * 60 * 60) / 60;
//    seconds1 = (seconds - days * 60 * 60 * 24 - hours * 60 * 60 - minutes * 60);

    seconds1 = seconds % 60;
    minutes = (seconds - seconds1) % 60;
    hours = (seconds - seconds1 - minutes * 60) % 60;
    days = (seconds - seconds1 - minutes * 60 - hours * 60 * 60) % 60;

    cout << seconds << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds1 << " seconds" << endl;

    return 0;
}