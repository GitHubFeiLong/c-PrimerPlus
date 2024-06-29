//
// Created by chenf on 2024/6/27.
//
#include <iostream>
#include "mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
/*
 * 然而，返回值不能是引用。因为函数将创建一个新的Time对象（sum），来表示另外两个Time对象的和。返回对象（如代码所做的那样）将创建对象的副本，而调用函数可以使用它。然而，如果返回类型为Time &，则引用的将是sum对象。但由于sum对象是局部变量，在函数结束时将被删除，因此引用将指向一个不存在的对象。使用返回类型Time意味着程序将在删除sum之前构造它的拷贝，调用函数将得到该拷贝。
 */
Time Time::Sum(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator*(double m) const
{
    Time result;
    long totalminutes = hours * m * 60 + minutes * m;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    return result;
}
Time operator*(double m, const Time & time)
{
    return time * m;
}
void Time::Show() const
{
    std::cout << hours << ":" << minutes << std::endl;
}


std::ostream & operator<<(std::ostream & os, const Time & time)
{
    std::cout << time.hours << ":" << time.minutes << std::endl;
    return os;
}

Time::~Time()
{
    std::cout << "~Time执行,address:" << this << std::endl;
}