//
// Created by chenf on 2024/6/25.
//
#include <iostream>

const int MAX_SIZE = 10;
int main()
{
    using namespace std;

    float scores[MAX_SIZE];
    int i;
    cout << "请输入高尔夫成绩。" << endl;
    for (i = 0; i < MAX_SIZE; i++)
    {
        cout << "请输入第" << i + 1 << "个 golfers 的成绩：";
        if (cin >> scores[i])
        {
            continue;
        }
        --i;
        break;
    }
    cout << "共输入" << i + 1 << "个 golfers 的成绩。" << endl;
    float sum = 0.0;
    for (int j = 0; j <= i; j++)
    {
        cout << scores[j] << (j == i ? "" : "\t");
        sum += scores[j];
    }
    cout << endl;
    cout << "平均成绩：" << sum / (i + 1) << endl;

    return 0;
}