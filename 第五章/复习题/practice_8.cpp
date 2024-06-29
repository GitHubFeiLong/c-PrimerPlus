//
// Created by chenf on 2024/6/21.
//
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;

    char word[30];
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    int size = 0;
    while (strcmp(word, "done"))
    {
        ++size;
        cin >> word;
    }
    cout << "You entered a total of " << size << " words.\n";
    return 0;
}