#include <iostream>
#include <cmath>
using namespace std;
int main() {
	string sa, sb;
	cin >> sa >> sb;
	double A = stod(sa);
	double B = stod(sb);
	cout << floor(A * B) << endl;
	return 0;
}