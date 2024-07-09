#include <iostream>
using namespace std;

int main() {
	int X, t;
	
	cin >> X >> t;
	
	if(X - t >= 0) {
		cout << X - t << endl;
	} else {
		cout << 0 << endl;
	}
	
	return 0;
}