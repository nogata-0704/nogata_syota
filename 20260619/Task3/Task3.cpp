#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    // ⑤ 配列の最後まで繰り返す
    for (int i = 0; i < size - 1; i++)
    {
        // ①・③ 最小要素を探索する
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // ②・④ 最小要素と現在の要素を交換する
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    const int SIZE = 100;
    int arr[SIZE];

    // 乱数の種を設定
    srand((unsigned int)time(NULL));

    // 100個の乱数(0～999)を生成
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }

    // ソート前
    cout << "===== ソート前 =====" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";

        // 10個ごとに改行
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }

    // 選択ソート
    selectionSort(arr, SIZE);

    // ソート後
    cout << endl;
    cout << "===== ソート後 =====" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";

        // 10個ごとに改行
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}   