#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;
	cout << input.replace(","," ") << endl;
	return 0;
}