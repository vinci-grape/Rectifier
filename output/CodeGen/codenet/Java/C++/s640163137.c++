#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	string elements[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		elements[i] = to_string(a[i]);
	}
	int swapCount = 0;
	for (int i = 0; i < n; i++) {
		int mini = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
		if (mini!= i) {
			int v = a[mini];
			a[mini] = a[i];
			a[i] = v;
			swapCount++;
		}
	}
	string ans = elements[0];
	for (int i = 1; i < n; i++) {
		ans += " " + elements[i];
	}
	cout << ans << endl;
	cout << swapCount << endl;
	return 0;
}