#include <iostream>
#include <random>
#include <vector>

int main()
{
    //乱数の準備
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0,100);

    //乱数で埋めた配列(ベクター)を作成
    std::vector<int>numbers;
    for(int n=0; n < 100; ++n)
    {
        std::cout <<dis(gen) << " ";
    }

    //ソート前の表示
    std::cout << "ソート前:";
    for(int n : numbers) 
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    //バブルソートの実装(昇順)
    // i = 基準としている位置
    // j = iと比較する位置
    int n = numbers.size();
    {
        for(int i= 0; i < n-1; ++i)
        {
            for(int j= 0; j < n-i-1; ++j)
            {
                if(numbers[j] > numbers[j+1])
                { 
                    std::swap(numbers[j],numbers[j+1]);
                }
            }
        }
    }

    //ソート後の表示
    std::cout <<" ソート後:";
    for(int n : numbers)
    {
        std::cout << n << " ";    
    }
    std::cout << std::endl;

    return 0;
}
