#include <iostream>
using namespace std;

int main(){
	int intA;
	cout << "Enter a number: ";
	cin >> intA;
	double dbAncer = pow(intA, 3);
	int intAncer = (int)dbAncer;
	cout << intAncer << endl;
	return 0;
}