//
// Created by chenf on 2024/6/24.
//
#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    cout << "Place input character(@ quit):" << endl;
    char ch;
    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
            continue;

        if (isupper(ch))
            cout << static_cast<char>(tolower(ch));
        else if (islower(ch))
            cout << static_cast<char>(toupper(ch));
        else
            cout << ch;
    }

    return 0;
}