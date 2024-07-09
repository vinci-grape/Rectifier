#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int N;
	int X;
	int m[100];
	cin >> N >> X;
	m[0] = 0;
	X -= m[0];
	int min = m[0];
	for (int i = 1; i < N; i++) {
		cin >> m[i];
		X -= m[i];
		if (m[i] < min) {
			min = m[i];
		}
	}
	cout << N + X / min;
	return 0;
}