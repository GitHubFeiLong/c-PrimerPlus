//
// Created by chenf on 2024/6/25.
//
#include <iostream>

void print(const char * str, int count);
int main()
{
    using namespace std;
    char arr[] = "hello world!";
    print(arr, 5);
    return 0;
}

void print(const char * str, int count)
{
    if (--count)
    {
        print(str, count);
    }
    std::cout << str << std::endl;
}