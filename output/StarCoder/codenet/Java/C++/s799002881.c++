#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, d, cnt = 0;
	cin >> n >> d;
	for(int i=0; i < n; i++) {
		double x, y;
		cin >> x >> y;
		if(sqrt(x*x+y*y)<=d) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}