#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
using namespace std;

class Main {
public:
	long N;
	vector<long> constraints;
	long result;

	Main() {
		cin >> N;
		for (int i = 0; i < 5; ++i) {
			long tmp;
			cin >> tmp;
			constraints.push_back(tmp);
		}
		calc();
	}

	void calc() {
		long min = LONG_MAX;
		for (long c : constraints) {
			min = min < c? min : c;
		}
		long time = N / min;
		if (N % min!= 0) {
			++time;
		}
		time += 4;
		result = time;
	}
};

int main() {
	Main ins;
	cout << ins.result << endl;
	return 0;
}