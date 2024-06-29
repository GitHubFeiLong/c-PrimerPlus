//
// Created by chenf on 2024/6/25.
//
#include <iostream>
const int MAX_SIZE = 10;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);
int main()
{
    using namespace std;
    double arr[MAX_SIZE];
    int size = Fill_array(arr, MAX_SIZE);
    Show_array(arr, size);
    Reverse_array(arr, size);
    Show_array(arr, size);

    return 0;
}

int Fill_array(double arr[], int size)
{
    using namespace std;
    cout << "Please enter double array values:";
    int len = 0;
    for (int i = 0; i < size; i++)
    {
        if (cin >> arr[i]) {
            ++len;
        }
    }
    return len;
}

void Show_array(double arr[], int size)
{
    using namespace std;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double arr[], int size)
{
    if (size < 4)
        return;
    double temp;
    for (int i = 1; i < size / 2; ++i)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}