#include <iostream>
using namespace std;

int main() {
	int i=0;
	
	for(i=1;i<=5;i++) {
		int n = 0;
		cin >> n;
		if(n==0) {
			break;
		}
	}
	
	cout << i << endl;
	return 0;
}