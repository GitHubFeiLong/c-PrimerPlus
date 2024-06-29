//
// Created by chenf on 2024/6/21.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct car
{
    char manufacturer[50];
    int year;
};
int main()
{
    cout << "有多少辆汽车：";
    int num;
    cin >> num;
    cin.ignore();
    vector<car> cars(num);
    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make:";
        cin.getline(cars[i].manufacturer, 50);
        cout << "Please enter the year made:";
        cin >> cars[i].year;
        cin.ignore();
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << cars[i].year << " " << cars[i].manufacturer << endl;
    }
    return 0;
}