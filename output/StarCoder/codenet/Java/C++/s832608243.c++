#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	bool flag = false;
	for (int i = 1; i <= 100000; i++) {
		if (int(1. * i *.08) == a && b == int(.1 * i)) {
			cout << i << endl;
			flag = true;
			break;
		}
	}
	if (!flag) {
		cout << -1 << endl;
	}
	return 0;
}