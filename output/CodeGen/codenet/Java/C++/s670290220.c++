#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Main {
public:
	int N;
	char c[26];
	Main() {
		cin >> N;
		for (int i=0; i<26; i++) {
			c[i] = 'A' + i;
		}
	}
	void print() {
		for (int i=0; i<N; i++) {
			cout << c[i%26];
		}
		cout << endl;
	}
};

int main() {
	Main m;
	m.print();
	return 0;
}