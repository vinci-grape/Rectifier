#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long n;
	cin >> n;

	double sqrt = sqrt(n);
	double nearNum = floor(sqrt);

	long ans = pow(nearNum, 2);

	cout << ans << endl;

	return 0;
}