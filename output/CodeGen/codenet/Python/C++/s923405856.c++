#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n == 0) {
		return 0;
	}
	
	int res = -1111111111;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s = max(s + a, a);
		res = max(s, res);
	}
	
	cout << res << endl;
	return 0;
}