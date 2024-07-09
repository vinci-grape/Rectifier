#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int A, B, T;
	scanf("%d %d %d", &A, &B, &T);
	cout << (T / A) * B << endl;
	return 0;
}