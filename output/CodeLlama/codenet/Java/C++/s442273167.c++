#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int l[n], r[n];
	for (int i=0; i<n; i++){
		cin >> l[i] >> r[i];
	}
	int sum = 0;
	for (int i=0; i<n; i++){
		sum += r[i] - l[i] + 1;
	}
	cout << sum << endl;
}