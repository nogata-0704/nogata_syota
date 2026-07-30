#include <iostream>
#include <iomanip>//小数点表示用
#include <stdexcept>
int main()
{
  try
  {
    const double price = 1500.0;   // 定価（税抜）
    const double taxRate = 0.10;   // 消費税率（10%）

    // 消費税額を計算（四捨五入）
    double tax = price * taxRate;
    tax = std::round(tax); // 円単位に丸める

    // 合計金額
    double total = price + tax;

    // 出力
    std::cout << std::fixed << std::setprecision(0); // 小数点なし
    std::cout << "定価: " << price << "円\n";
    std::cout << "消費税: " << tax << "円\n";
    std::cout << "合計金額: " << total << "円\n";
    }
     catch (const std::exception &e) {
     std::cerr << "エラー: " << e.what() << '\n';
    return 1;
    }
      return 0;
}
