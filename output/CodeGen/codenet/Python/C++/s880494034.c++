#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int N;
	int XS[100];
	int m = 9999999999;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &XS[i]);
	}
	for (int i = 1; i < 100; i++) {
		int c = 0;
		for (int j = 0; j < N; j++) {
			c += (XS[j] - i) * (XS[j] - i);
		}
		if (m > c) {
			m = c;
		}
	}
	printf("%d", m);
	return 0;
}