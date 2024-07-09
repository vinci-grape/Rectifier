#include <iostream>
#include <cmath>
using namespace std;

int main() {
	BigInteger a,b,c;
	cin >> a >> b;
	c = a.max(b);
	if(a.equals(c)&&!b.equals(c)) 
		cout << "GREATER";
	else if(b.equals(c)&&!a.equals(c))
		cout << "LESS";
	else 
		cout << "EQUAL";
	return 0;
}