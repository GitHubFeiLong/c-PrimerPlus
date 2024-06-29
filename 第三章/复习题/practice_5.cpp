//
// Created by chenf on 2024/6/20.
//
#include <iostream>
/*
 * 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。将这些信息存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似：
 * <pre>
 * Enter the world's population: 6898758899
 * Enter the population of the US: 310783781
 * The population of the US is 4.50492% of the world population.
 * </pre>
 */
int main()
{
    using namespace std;

    long long earth_population, us_population;
    float us_percentage;
    cout << "ENter the world's population:";
    cin >> earth_population;
    cout << "Enter the population of the US:";
    cin >> us_population;
    us_percentage = us_population  * 100.0 / earth_population;
    cout << "The population of the US is " << us_percentage << "% of the world population." << endl;
    return 0;
}