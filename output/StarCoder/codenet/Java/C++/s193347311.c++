#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 0, h = 0;
	string s1, s2;
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		int cmp = s1.compare(s2);
		if (cmp < 0)
		{
			h += 3;
		}
		else if (cmp == 0)
		{
			t++;
			h++;
		}
		else
		{
			t += 3;
		}
	}
	cout << t << " " << h << endl;
	return 0;
}