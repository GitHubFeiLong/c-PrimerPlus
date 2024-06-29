//
// Created by chenf on 2024/6/21.
//
#include <iostream>
struct CandyBar
{
    char brand[20];
    float weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar snacks[3] = {
            {"Mocha Munch1", 2.3, 350},
            {"Mocha Munch2", 2.3, 350},
            {"Mocha Munch3", 2.3, 350}
    };
    cout << "brand: " << snacks[0].brand << endl;
    return 0;
}