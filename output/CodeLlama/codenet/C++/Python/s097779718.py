def Euclid(x, y):
	tmp = 0

	if x < y:
		tmp = x
		x = y
		y = tmp

	if x % y == 0:
		return y
	return Euclid(y, x % y)

A = int(input())
B = int(input())

print((A*B) / Euclid(A, B))

#include <iostream>
using namespace std;

int Euclid(int x, int y) {
	int tmp;

	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	if (!(x%y)) return y;
	return Euclid(y, x%y);
}

int main() {
	int A, B; cin >> A >> B;

	cout << (A*B) / Euclid(A, B) << endl;
}