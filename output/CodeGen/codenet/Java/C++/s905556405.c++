#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int numlist[5];
	int k;
	
	for(int i=0;i<5;i++){
		numlist[i] = 0;
		cin >> numlist[i];
	}
	cin >> k;
	if((numlist[4] - numlist[0]) > k) {
		cout << ":(" << endl;
	} else {
		cout << "Yay!" << endl;
	}
	return 0;
}