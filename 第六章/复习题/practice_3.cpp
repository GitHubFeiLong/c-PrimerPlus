//
// Created by chenf on 2024/6/24.
//
#include <iostream>

int main()
{
    using namespace std;

    cout << "Please enter one of the following choices:"
         << "\nc) carnivore\tp) pianist"
         << "\nt) tree \t g) game"
         << endl;
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'c':
                cout << "A maple is a carnivore." << endl;
                break;
            case 'p':
                cout << "A maple is a pianist." << endl;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                break;
            case 'g':
                cout << "A maple is a game." << endl;
                break;
            default:
                cout << "Please enter a c, p, t, or g:";
                continue;
        }
        break;
    }
    return 0;
}