//
// Created by chenf on 2024/6/21.
//
#include <iostream>

struct Pizza
{
    char company[20];
    float diameter;
    float weight;
};
int main()
{
    using namespace std;

    Pizza pizza;
    cout << "请输入公司名称：";
    cin.getline(pizza.company, 20);
    cout << "请输入披萨的直径：";
    cin >> pizza.diameter;
    cout << "请输入披萨的重量：";
    cin >> pizza.weight;
    cout << "公司名称：" << pizza.company << endl;
    return 0;
}