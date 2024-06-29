//
// Created by chenf on 2024/6/27.
//
#ifndef C__PRIMERPLUS_STRINGBAD_H
#define C__PRIMERPLUS_STRINGBAD_H
#include <iostream>

class StringBad
{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const StringBad & s);
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
    StringBad & operator=(const StringBad & s);
};


#endif //C__PRIMERPLUS_STRINGBAD_H
