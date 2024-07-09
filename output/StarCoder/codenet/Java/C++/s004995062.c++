#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	string sa, sb;
	cin >> sa >> sb;
	double A = atof(sa.c_str());
	double B = atof(sb.c_str());
	cout << fixed << setprecision(0) << A * B << endl;
	return 0;
}