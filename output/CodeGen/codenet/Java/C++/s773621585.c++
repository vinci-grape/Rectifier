#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, string> map;
	int n;
	string str;
	cin >> n;
	cin.ignore();
	getline(cin, str);
	for (int i=0; i<n; i++) {
		getline(cin, str);
		map[str] = "";
	}
	cout << map.size() << endl;
	return 0;
}