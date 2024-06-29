//
// Created by chenf on 2024/6/25.
//
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showBox(box box);
void changeVolume(box * box);
int main()
{
    using namespace std;

    box box = {"maker value", 1.0, 2.0, 3.0, 4.0};
    showBox(box);
    changeVolume(&box);
    showBox(box);

    return 0;
}

void showBox(box box)
{

    std::cout << "maker:" << box.maker << "\t"
              << "height:" << box.height << "\t"
              << "width:" << box.width << "\t"
              << "length:" << box.length << "\t"
              << "volume:" << box.volume << std::endl;
}

void changeVolume(box * box)
{
    box->volume = box->height * box->width * box->length;
}