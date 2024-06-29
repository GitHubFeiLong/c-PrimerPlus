//
// Created by chenf on 2024/6/25.
//
#include <iostream>
#include <cstring>
template <typename T>
T maxn(const T t1[], int size);

template<> void maxn<>(char ** t1);

int main()
{

    return 0;
}
template <typename T>
T maxn(const T t1[], int size)
{
    T max = t1[0];
    for (int i = 1; i < size; i++)
    {
        if (t1[i] > max)
        {
            max = t1[i];
        }
    }
    return max;
}

//template <>
//char * maxn<char *>(char * t1[], int size)
//{
//    int maxLength = strlen(t1[0]);
//    int maxIndex = 0;
//    for (int i = 1; i < size; i++)
//    {
//        if (maxLength < strlen(t1[i]))
//        {
//            maxLength = strlen(t1[i]);
//            maxIndex = i;
//        }
//    }
//
//    return t1[maxIndex];
//}