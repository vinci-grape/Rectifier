#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << (a % 500 <= b ? "Yes" : "No") << endl;
	return 0;
}