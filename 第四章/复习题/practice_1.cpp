//
// Created by chenf on 2024/6/20.
//
#include <iostream>
/*
 * 编写一个C++程序，如下述输出示例所示的那样请求并显示信息：

What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。假设用户请求A、B或C，所以不必担心D和F之间的空档。
 */
int main()
{
    using namespace std;
    char first_name[20], last_name[20];
    int age;
    char grade;

    cout << "what is your first name?";
    cin.getline(first_name, 20);
    cout << "what is your last name?";
    cin >> last_name;
    cout << "what letter grade do you deserve?";
    cin >> grade;
    cout << "what is your age?";
    cin >> age;

    cout << "Name:" << last_name << ", " << first_name << endl;
    cout << "Grade:" << grade
         << "\nAge:" << age
         << endl;
    return 0;
}