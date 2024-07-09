#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int A,B;
	cin >> A >> B;
	if ((A+B)%2 == 1)
		cout << "IMPOSSIBLE" << endl;
	else
		cout << ((A+B)//2) << endl;
	return 0;
}