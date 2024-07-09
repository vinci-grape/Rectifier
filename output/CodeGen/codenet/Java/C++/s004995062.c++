#include <iostream>
#include <cmath>
using namespace std;
int main() {
	string sa, sb;
	cin >> sa >> sb;
	BigDecimal A(sa), B(sb);
	cout << A.multiply(B).setScale(0, BigDecimal::ROUND_DOWN) << endl;
	return 0;
}