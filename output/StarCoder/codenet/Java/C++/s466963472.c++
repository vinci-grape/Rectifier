#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int d;

bool read() {
	if(!scanf("%d", &d)) return false;
	return true;
}

int solve() {
	int ans,n;
	ans = 0; n = 600 / d;
	for(int x = d; x < 600; x += d) {
		ans += d * ((x * x));
	}
	return ans;
}

int main() {
	while(read()) {
		printf("%d\n", solve());
	}
	return 0;
}