#include <iostream>


int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 0 || i % 15 == 0)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}