//
// Created by chenf on 2024/6/19.
//
#include <iostream>
int main()
{
    using namespace std;
    // 设置输出格式为固定小数点，用于后续浮点数的输出
    cout.setf(ios_base::fixed, ios_base::floatfield);

    // 计算10除以3的浮点结果，赋值给tub
    float tub = 10.0 / 3.0;
    // 计算10除以3的双精度结果，赋值给mint
    double mint = 10.0 / 3.0;
    // 定义一个常量million，值为10^6，用于后续计算
    const float million = 1.0e6;

    // 输出tub的值
    cout << "tub = " << tub;
    // 输出1000000个tub的值
    cout << ", a million tubs = " << million * tub;
    // 输出10000000个tub的值
    cout << ", \nand ten million tubs = ";
    cout << 10 * million * tub << endl;
    // 输出mint的值
    cout << "mint = " << mint << " and a million mints = ";
    // 输出1000000个mint的值
    cout << million * mint << endl;

}