//
// Created by chenf on 2024/6/27.
//

#ifndef C__PRIMERPLUS_MYTIME0_H
#define C__PRIMERPLUS_MYTIME0_H


class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    Time operator+(const Time & t) const;
    Time operator*(double m) const;
    friend Time operator*(double m, const Time & t);
    void Show() const;
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
    ~Time();
};

#endif //C__PRIMERPLUS_MYTIME0_H
