//
// Created by chenf on 2024/6/24.
//
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;

    ifstream inFile;
    inFile.open("carinfo.txt");
    if (!inFile.is_open())
    {
        cout << "打开文件失败" << endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    while (inFile.get() && !inFile.eof())
    {
        ++count;
    }

    cout << "文件包含 " << count << "个字符" << endl;
    inFile.close();
    return 0;
}