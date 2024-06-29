//
// Created by chenf on 2024/6/21.
//
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    int size = 0;
    while (word != "done")
    {
        ++size;
        cin >> word;
    }

    cout << "You entered a total of " << size << " words.\n";
    return 0;
}