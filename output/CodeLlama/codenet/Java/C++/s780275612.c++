#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int intA;
	cin >> intA;
	double dbAncer = pow(intA, 3);
	int intAncer = (int)dbAncer;
	cout << intAncer << endl;
	return 0;
}