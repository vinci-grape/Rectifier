#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int h[n];
	for(int i = 0; i < n; i++) {
		cin >> h[i];
	}

	int ans = 0;
	int out = 0;

	for( int i = 0; i < n; i++ ) {
		if( out < h[i] ) {
			ans += h[i] - out;
			out =  h[i];
		}else {
			out = h[i];
		}
	}

	cout << ans << endl;
}