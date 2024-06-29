//
// Created by chenf on 2024/6/25.
//
#include <iostream>
#include <string>
using namespace std;

void toUpper(string & str);
int main()
{
    cout << "Enter a string (q to quit):";
    string str;
    getline(cin, str);
    while (str != "q")
    {
        toUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit):";
        getline(cin, str);
    }
    cout << "Bye." << endl;

    return 0;
}

void toUpper(string & str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}