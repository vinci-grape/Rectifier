#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int array[n];
	int max = 0;
	int min = 10000;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		if (max < array[i]) {
			max = array[i];
		}

		if (min > array[i]) {
			min = array[i];
		}
	}
	cout << max - min;
	return 0;
}