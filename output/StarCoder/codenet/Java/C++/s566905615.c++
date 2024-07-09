#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string answer = "No";
	if(a + b >= c) {
		answer = "Yes";
	}
	cout << answer << endl;
	return 0;
}