#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define RAND_MAX_VALUE 1000  // 乱数の最大値（0〜999）

// 要素を交換する関数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// クイックソートのパーティション処理
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 最後の要素をピボットに選択
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // ピボット以下なら左側へ
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// クイックソート本体
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // 左側をソート
        quickSort(arr, pi + 1, high); // 右側をソート
    }
}

// 配列を表示する関数
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%4d", arr[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10個ごとに改行
    }
}

int main() {
    int arr[SIZE];

    // 乱数の初期化
    srand((unsigned int)time(NULL));

    // 配列に乱数を格納
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % RAND_MAX_VALUE;
    }

    printf("=== ソート前 ===\n");
    printArray(arr, SIZE);

    // クイックソート実行
    quickSort(arr, 0, SIZE - 1);

    printf("\n=== ソート後 ===\n");
    printArray(arr, SIZE);

    return 0;
}