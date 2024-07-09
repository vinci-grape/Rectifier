#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string input;
	cin >> input;
	replace(input.begin(), input.end(), ',', ' ');
	cout << input << endl;
	return 0;
}