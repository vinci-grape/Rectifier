#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int d;
	cin >> d;
	int ans = 0;
	for(int i = 1; i * d < 600; i++) {
		int x = i * d;
		int y = x * x;
		ans += y * d;
	}
	cout << ans << endl;
	return 0;
}