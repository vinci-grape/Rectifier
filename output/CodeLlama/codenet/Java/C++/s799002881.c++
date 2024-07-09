#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, cnt = 0;
	double d, x, y;
	cin >> n >> d;
	for(int i=0; i < n; i++) {
		cin >> x >> y;
		if(sqrt(x*x+y*y)<=d) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}