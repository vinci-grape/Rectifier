#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
#include <bitset>
using namespace std;

int main() {
	int T;
	int K, S;
	int ans;
	int x, y, z;
	int wk;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d %d", &K, &S);
		ans = 0;
		for (x = 0; x <= K; x++) {
			for (y = 0; y <= K; y++) {
				wk = S - x - y;
				if (wk >= 0 && wk <= K) {
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}