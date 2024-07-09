#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a * b >= c * d) {
		cout << a * b << endl;
	} else if (a * b <= c * d) {
		cout << c * d << endl;
	}
	return 0;
}