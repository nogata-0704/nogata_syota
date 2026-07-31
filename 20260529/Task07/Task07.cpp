#include <iostream>

int main()
{
    for(int i = 1; i < 100; ++i)
    {
        if(i % 4 == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}