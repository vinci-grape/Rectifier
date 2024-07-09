#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int a, b, c;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << "Enter the third number: ";
	cin >> c;
	if(a + b >= c) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}