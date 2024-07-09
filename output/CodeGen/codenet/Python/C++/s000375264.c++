#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int X,t;
	cin >> X >> t;
	if (X > t)
	{
		cout << X - t << endl;
	}
	else if (X <= t)
	{
		cout << 0 << endl;
	}
	return 0;
}