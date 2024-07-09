#include <iostream>
using namespace std;

int main() {
	int a, b, t;
	cin >> a >> b >> t;
	double time = 0;
	int count = 0;
	while (time < t + 0.5) {
		count += b;
		time += a;
		if (time > t + 0.5) {
			count -= b;
			break;
		}
	}
	cout << count << endl;
	return 0;
}