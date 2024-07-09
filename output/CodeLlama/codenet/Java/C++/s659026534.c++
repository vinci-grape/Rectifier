#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		count += i;
	}
	cout << count << endl;
	return 0;
}