#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
	vector<long> constraints;
	long N;
	long result;

	cin >> N;
	for (int i = 0; i < 5; ++i) {
		long c;
		cin >> c;
		constraints.push_back(c);
	}

	long min = LONG_MAX;
	for (long c : constraints) {
		min = min < c ? min : c;
	}
	long time = N / min;
	if (N % min != 0) {
		++time;
	}
	time += 4;
	result = time;

	cout << result << endl;

	return 0;
}