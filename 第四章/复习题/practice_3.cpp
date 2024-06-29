//
// Created by chenf on 2024/6/20.
//
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char first_name[10];
    char last_name[10];

    cout << "Enter your first name:";
    cin.getline(first_name, 10);

    cout << "Enter your last name:";
    cin.getline(last_name, 10);

    char * name = new char[strlen(first_name) + strlen(last_name) + 2];
    strcpy(name, last_name);
    strcat(name, ", ");
    strcat(name, first_name);
    cout << "Here's the information in a single string:" << name << endl;

    delete [] name;
    return 0;
}