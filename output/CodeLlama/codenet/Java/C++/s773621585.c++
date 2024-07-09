#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<string, string> map;
	int n;
	cin >> n;
	cin.ignore();
	string str;
	getline(cin, str);
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		map.insert(make_pair(s, ""));
	}
	cout << map.size() << endl;
	return 0;
}