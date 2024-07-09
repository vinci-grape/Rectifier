#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int a, b, t;
	cout << "Enter a, b, and t: ";
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
	cout << "count = " << count << endl;
	return 0;
}