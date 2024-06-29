//
// Created by chenf on 2024/6/19.
//
#include <iostream>
/*
 * 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应的BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
 */
int main()
{
    using namespace std;
    int yin_cun, yin_chi, bang;
    cout << "请按顺序输入英寸，英尺，磅（用空格分割）:";
    cin >> yin_cun;
    cin >> yin_chi;
    cin >> bang;
    cout << "yin_cun = " << yin_cun << ", yin_chi = " << yin_chi << ", bang = " << bang << endl;

    const int YinYinZi = 12;
    const float MesterYinZi = 0.0254F;
    const float KgYinZi = 2.2F;

    float m = (yin_cun + yin_chi * YinYinZi) * MesterYinZi;
    float kg = bang / KgYinZi;
    float bmi = kg / (m * m);

    cout << "BMI = " << bmi << endl;
    return 0;
}