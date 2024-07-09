#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
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
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << swapCount << endl;
	return 0;
}