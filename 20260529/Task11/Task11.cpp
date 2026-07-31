#include <iostream>
using namespace std;

int main()
{
    const int price = 1500;      // 本の定価
    const double taxRate = 0.10; // 消費税率10%

    int tax = static_cast<int>(price * taxRate); // 消費税
    int total = price + tax;                     // 合計金額

    cout << "本の定価: " << price << "円" << endl;
    cout << "消費税: " << tax << "円" << endl;
    cout << "合計金額: " << total << "円" << endl;

    return 0;
}