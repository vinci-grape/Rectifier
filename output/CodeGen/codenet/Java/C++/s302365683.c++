#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> hm;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		hm[val]++;
	}
	int ans = 0;
	for (auto it = hm.begin(); it!= hm.end(); it++) {
		int num = it->second;
		if (num > it->first)
			ans += num - it->first;
		else if (num < it->first)
			ans += num;
	}
	cout << ans << endl;
	return 0;
}