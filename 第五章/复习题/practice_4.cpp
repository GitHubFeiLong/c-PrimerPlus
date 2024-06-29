//
// Created by chenf on 2024/6/21.
//
#include <iostream>

int main()
{
    using namespace std;
    float daphone_price = 100.0F, cleo_price = 100.0F;
    int years = 0;
    while (cleo_price <= daphone_price)
    {
        ++years;
        daphone_price += 10;

        cleo_price = cleo_price * 1.05;
    }

    cout << "第" << years << "年后，cleo存款：" << cleo_price << "美元，高于daphne存款：" << daphone_price << "美元" << endl;
    return 0;
}