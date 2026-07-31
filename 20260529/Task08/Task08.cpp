#include <iostream>

int main()
{
    const int multiple = 15;
    std::cout <<"1以上100以下の3と5の公倍数"<<std::endl;
    for (int i =multiple; i <=100; i += multiple)
    {
        std::cout <<i << std::endl;
    }

    return 0;
}