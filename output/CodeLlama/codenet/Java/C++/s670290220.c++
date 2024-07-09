#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	cin >> N;
	char c[1000];
	cin >> c;
	for (int i=0; i<strlen(c); i++) {
		c[i] = (char)((c[i]-'A'+N) % 26 + 'A');
	}
	cout << c << endl;
	return 0;
}