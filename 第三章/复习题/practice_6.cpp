//
// Created by chenf on 2024/6/20.
//
#include <iostream>

/*
 * 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的结果——即每100公里的耗油量（升）。
*/
int main()
{
    using namespace std;

    cout << "请输入驱车里程（英里）和使用汽油量（加仑）：";
    double mile, gas;
    cin >> mile >> gas;
    cout << "汽车耗油量为一加仑的里程为：" << mile / gas << endl;
    cout << "请输入驱车里程（公里）和使用汽油量（升）：";
    double km, gas_km;
    cin >> km >> gas_km;
    cout << "汽车耗油量为一升的公里为：" << km / gas_km * 100 << endl;
    return 0;
}