//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个距离（单位long）：" << endl;
    long dis;
    cin >> dis;
    long code = dis * 220;
    cout << dis << "long." << code << "码." << endl;
    return 0;
}