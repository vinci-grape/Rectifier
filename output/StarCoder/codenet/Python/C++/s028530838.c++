#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	if (islower(x[0]))
		cout << "a";
	else
		cout << "A";
	return 0;
}