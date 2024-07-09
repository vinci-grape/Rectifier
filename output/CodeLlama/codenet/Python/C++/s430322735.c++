#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string> lst;
	int pair = 0;
	for (int i = 0; i < n; i++)
	{
		string st;
		cin >> st;
		sort(st.begin(), st.end());
		lst.push_back(st);
	}
	sort(lst.begin(), lst.end());
	lst.push_back("end");
	string pre = "";
	int tmp_cnt = 0;
	int cnt = 0;
	for (int i = 0; i < lst.size(); i++)
	{
		if (lst[i] == pre)
		{
			tmp_cnt++;
		}
		else
		{
			cnt += sum([j for j in range(tmp_cnt + 1)]);
			tmp_cnt = 0;
		}
		pre = lst[i];
	}
	cout << cnt << endl;
	return 0;
}