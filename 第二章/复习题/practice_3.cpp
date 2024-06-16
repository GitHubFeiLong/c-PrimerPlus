//
// Created by Administrator on 2024/6/16.
//
#include <iostream>
using namespace std;
void fun1(void);
void fun2(void);
int main()
{
    fun1();
    fun1();
    fun2();
    fun2();
    return 0;
}
using namespace std;
void fun1(void)
{
    cout << "Three blind mice" << endl;
}

void fun2(void)
{
    cout << "See how they run" << endl;
}