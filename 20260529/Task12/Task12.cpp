#include <iostream>
using namespace std;

int main()
{
    int regularPrice = 200;
    int memberPrice = 150;

    int regularTax = regularPrice * 10 / 100;
    int memberTax = memberPrice * 10 / 100;

    cout << "定価(税込): " << regularPrice + regularTax << "円" << endl;
    cout << "会員価格(税込): " << memberPrice + memberTax << "円" << endl;

    return 0;
}