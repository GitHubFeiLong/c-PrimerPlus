//
// Created by chenf on 2024/6/25.
//
#include <iostream>
using namespace std;

// 计算组合数C(n, k)
unsigned long long combination(unsigned int n, unsigned int k) {
    if (k > n) return 0;
    if (k * 2 > n) k = n - k; // 优化：C(n, k) == C(n, n-k)
    if (k == 0) return 1;

    unsigned long long result = 1;
    for (unsigned int i = 1; i <= k; ++i) {
        result *= n--;
        result /= i;
    }
    return result;
}

int main() {
    // 定义域号码和特选号码的数量
    unsigned int fieldNumbers = 33;
    unsigned int selectedFromField = 6;
    unsigned int specialNumber = 16;

    // 计算中头奖的几率
    unsigned long long chanceOfWinning = combination(fieldNumbers, selectedFromField) * specialNumber;

    cout << "中得头奖的几率是从 " << fieldNumbers << " 个域号码中选择 " << selectedFromField
         << " 个号码的组合数（约为 " << combination(fieldNumbers, selectedFromField)
         << "）与从 " << specialNumber << " 个特选号码中选择 1 个号码的组合数（即 " << specialNumber
         << "）的乘积，约为：" << chanceOfWinning << "。\n";

    return 0;
}
