#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
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
	cout << count;
	return 0;
}