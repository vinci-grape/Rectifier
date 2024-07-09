#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string sa, sb;
    cin >> sa >> sb;
    BigDecimal A = BigDecimal(sa);
    BigDecimal B = BigDecimal(sb);
    cout << A.multiply(B).setScale(0, BigDecimal::ROUND_DOWN) << endl;

    return 0;
}