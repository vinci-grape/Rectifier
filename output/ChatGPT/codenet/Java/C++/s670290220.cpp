#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++) {
		s[i] = ((s[i]-'A'+N) % 26 + 'A');
	}
	cout << s << endl;
}