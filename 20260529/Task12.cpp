#include <iostream>
#include <iomanip> // 小数点表示用
#include <stdexcept>

using namespace std;

// 消費税率（10%）
const double TAX_RATE = 0.10;

// 消費税額を計算する関数
double calcTax(double price) {
    if (price < 0) {
        throw invalid_argument("価格は0以上である必要があります。");
    }
    return price * TAX_RATE;
}

// 税込金額を計算する関数
double calcTotal(double price) {
    return price + calcTax(price);
}

int main() {
    try {
        double regularPrice = 200.0;
        double memberPrice  = 150.0;

        // 消費税額
        double regularTax = calcTax(regularPrice);
        double memberTax  = calcTax(memberPrice);

        // 税込合計
        double regularTotal = calcTotal(regularPrice);
        double memberTotal  = calcTotal(memberPrice);

        // 出力（小数点以下2桁表示）
        cout << fixed << setprecision(2);
        cout << "=== ジュース価格計算 ===" << endl;
        cout << "定価: " << regularPrice << "円" 
             << " | 消費税: " << regularTax << "円"
             << " | 合計: " << regularTotal << "円" << endl;

        cout << "会員定価: " << memberPrice << "円" 
             << " | 消費税: " << memberTax << "円"
             << " | 合計: " << memberTotal << "円" << endl;

    } catch (const exception& e) {
        cerr << "エラー: " << e.what() << endl;
        return 1;
    }

    return 0;
}