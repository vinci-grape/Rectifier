#include <iostream>
using namespace std;

const int MAX = 200000;

int main() {
	int R[MAX];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> R[i];
	}		
	int maxv = R[1] - R[0];
	int minv = R[0];
	for(int i = 1; i < n; i++) {
		maxv = max(maxv, R[i] - minv);	
		minv = min(minv, R[i]);
	}
	cout << maxv << endl;

	return 0;
}