//
// Created by chenf on 2024/6/19.
//
#include <iostream>
/*
 * 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个const符号常量来表示转换因子。
 */
int main()
{
    using namespace std;
    const int yz = 12;
    int height;
    cout << "请输入您的身高（单位为英寸）:________\b\b\b\b\b\b\b\b";
    cin >> height;
    cout << "您的身高是：" << height / yz << "英尺" << height % yz << "英寸" << endl;
    return 0;
}