//
// Created by chenf on 2024/6/19.
//
#include <iostream>

int main()
{
    using namespace std;

    // 初始化全局变量，用于后续演示浮点数和整数运算的差异
    int auks, bats, coots;

    // 计算auks的值，展示浮点数相加后自动转换为整型的过程
    auks = 19.99 + 11.99;

    // 计算bats的值，显示显式类型转换（强制类型转换）对浮点数相加结果的影响
    bats = (int) 19.99 + (int) 11.99;
    // 同上，但使用C++的类型转换语法，强调代码的现代性和可读性
    coots = int (19.99) + int (11.99);

    // 输出auks, bats, coots的值，展示不同转换策略下的结果比较
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    // 定义一个字符变量，用于后续演示字符与整型之间的转换
    char ch = 'Z';

    // 输出字符的ASCII码值，展示字符隐式转换为整型的过程
    cout << "The code for " << ch << " is "
         << int (ch) << endl;

    // 同上，但使用static_cast显示类型转换，增加代码的可读性和明确性
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;
    return 0;
}