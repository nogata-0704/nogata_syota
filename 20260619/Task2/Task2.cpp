#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

int main()
{
    //乱数の準備
    std::random_device td;
    std::mt19937 gen(td()); //乱数生成器
    std::uniform_int_distribution<int> dis(0,100);//0~100までの整数を均等確率で生成

    //乱数で埋めた配列(ベクター)を作成
    std::vector<int>numbers;
    for(int n=0; n < 100; ++n)
    {
        numbers.push_back(dis(gen));
    }

    //ソート前の表示
    std::cout << "ソート前:";
    for(int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    //選択ソートの実装(昇順)
    // i = 基準としている位置
    // j = iと比較する位置
    int n = numbers.size();
    for(int i = 0; i < n - 1; ++i)
    {
        int minIndex = i; //今の位置が最小
        for(int j = i + 1; j < n; ++j)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }
        // 最小値と基準位置の要素を交換
        std::swap(numbers[i], numbers[minIndex]);
    }

    //ソート後の表示
    std::cout << "ソート後:";
    for(int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;

}
