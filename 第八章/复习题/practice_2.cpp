//
// Created by chenf on 2024/6/25.
//
#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
    char candyBrand[20];
    float weight;
    int heat;
};

void fun(CandyBar & bar, char arr[] = "Millennium Munch", float weight = 2.85, int heat = 350);
void show(const CandyBar & bar);
int main()
{
    CandyBar bar;
    fun(bar);
    show(bar);

    return 0;
}
void fun(CandyBar & bar, char arr[], float weight, int heat)
{
    strcpy(bar.candyBrand, arr);
    bar.weight = weight;
    bar.heat = heat;
}
void show(const CandyBar & bar)
{
    cout << "candyBrand = \"" << bar.candyBrand << "\"" << endl;
    cout << "weight = " << bar.weight << "" << endl;
    cout << "heat = " << bar.heat << "" << endl;
}