#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int a;
	while(cin >> a) {
		if(a == 0) {
			cout << s.top() << endl;
			s.pop();
		} else {
			s.push(a);
		}
	}
	return 0;
}