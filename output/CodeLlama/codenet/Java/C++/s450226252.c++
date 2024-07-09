#include <iostream>

using namespace std;

int main() {
	
	short r;
	
	cin >> r;
	
	if (r < 1200) {
		cout << "ABC" << endl;
		return 0;
	}
	
	if (r < 2800) {
		cout << "ARC" << endl;
		return 0;
	}
	
	cout << "AGC" << endl;
	
	return 0;
	
}