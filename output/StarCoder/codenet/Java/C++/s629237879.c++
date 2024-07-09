#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> str(n);
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	vector<string> mark = {"S", "H", "C", "D"};
	for (string ma : mark)
	{
		for (int i = 1; i <= 13; i++)
		{
			string s = to_string(i);
			string st = ma + " " + s;
			if (find(str.begin(), str.end(), st)!= str.end())
			{
				continue;
			}
			else
			{
				cout << st << endl;
			}
		}
	}
	return 0;
}