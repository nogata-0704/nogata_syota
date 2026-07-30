#include <iostream>
using namespace std;
int main()
{
    unsigned int color = 0x2DBE60;

    // RGBを取り出す
    unsigned char r = (color >> 16) & 0xFF;
    unsigned char g = (color >> 8) & 0xFF;
    unsigned char b = color & 0xFF;

    std::cout << "R = " << (int)r << std::endl;
    std::cout << "G = " << (int)g << std::endl;
    std::cout << "B = " << (int)b << std::endl;

    return 0;
}