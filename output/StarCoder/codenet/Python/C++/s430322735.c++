#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		sort(s.begin(), s.end());
		string pre = "";
		int tmp_cnt = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == pre)
				tmp_cnt++;
			else
			{
				cnt += tmp_cnt + 1;
				tmp_cnt = 0;
			}
			pre = s[j];
		}
		cnt += tmp_cnt + 1;
	}
	cout << cnt << endl;
	return 0;
}