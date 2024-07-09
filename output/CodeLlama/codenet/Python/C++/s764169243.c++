#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	vector<int> ans(N, 1);
	vector<int> left_seg(N, 0);
	for (int i = 0; i < N; i++) {
		ans[a[i] - 1] *= i + 1 - left_seg[a[i] - 1];
		left_seg[a[i] - 1] = i + 1;
	}
	vector<int> right_seg(N, 0);
	for (int i = N - 1; i >= 0; i--) {
		ans[a[i] - 1] *= i + 1 - right_seg[a[i] - 1];
		right_seg[a[i] - 1] = i + 1;
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += ans[i];
	}
	cout << sum << endl;
	return 0;
}