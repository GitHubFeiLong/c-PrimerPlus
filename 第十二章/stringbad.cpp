//
// Created by chenf on 2024/6/27.
//
#include <cstring>
#include "stringbad.h"
using std::cout;

int StringBad::num_strings = 0;
StringBad::StringBad(const StringBad & s)
{
    len = std::strlen(s.str);
    str = new char[len + 1];
    std::strcpy(str, s.str);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default created\n";
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, ";  // FYI
    --num_strings;                                 // required
    cout << num_strings << " left\n";              // FYI
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}

StringBad & StringBad::operator=(const StringBad & st)
{
    if (this == &st)          // object assigned to itself
        return *this;         // all done
    delete [] str;            // free old string
    len = st.len;
    str = new char [len + 1]; // get space for new string
    std::strcpy(str, st.str); // copy the string
    return *this;             // return reference to invoking object
}