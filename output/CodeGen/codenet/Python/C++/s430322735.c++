#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string lst[n];
	string pre = "";
	int tmp_cnt = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> lst[i];
		sort(lst[i].begin(), lst[i].end());
		lst[i] += "end";
		pre = lst[i];
		tmp_cnt = 0;
		cnt = 0;
		for (int j = 0; j < n; ++j) {
			if (lst[j] == pre) {
				tmp_cnt += 1;
			} else {
				cnt += sum([j for j in range(tmp_cnt + 1)])
				tmp_cnt = 0;
			}
			pre = lst[j];
		}
		cout << cnt << endl;
	}
	return 0;
}