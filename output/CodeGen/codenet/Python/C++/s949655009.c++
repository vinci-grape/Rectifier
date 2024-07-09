#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string strn;
	int n;
	cin >> strn >> n;
	vector<string> shichigolist;
	shichigolist.push_back("3");
	shichigolist.push_back("5");
	shichigolist.push_back("7");
	vector<vector<string> > shichigo(strn.size());
	for (int i = 0; i < strn.size(); ++i)
	{
		if (i == 0)
		{
			for (int j = 0; j < shichigolist.size(); ++j)
			{
				shichigo[i].push_back(shichigolist[j]);
			}
		}
		else
		{
			for (int j = 0; j < shichigo[i - 1].size(); ++j)
			{
				for (int k = 0; k < shichigolist.size(); ++k)
				{
					shichigo[i].push_back(shichigo[i - 1][j] + shichigolist[k]);
				}
			}
		}
	}
	int target = strn.size() - 1;
	for (int i = 0; i < strn.size(); ++i)
	{
		for (int j = 0; j < shichigo[i].size(); ++j)
		{
			if (i == target)
			{
				if (shichigo[i][j].length() > n)
				{
					shichigo[target].erase(shichigo[target].begin() + j);
				}
				else if (shichigo[i][j].length() == n && shichigo[i][j].count("3") == 0 && shichigo[i][j].count("5") == 0 && shichigo[i][j].count("7") == 0)
				{
					shichigo[target].erase(shichigo[target].begin() + j);
				}
			}
			else
			{
				if (shichigo[i][j].length() == n && shichigo[i][j].count("3") == 0 && shichigo[i][j].count("5") == 0 && shichigo[i][j].count("7") == 0)
				{
					shichigo[i].erase(shichigo[i].begin() + j);
				}
			}
		}
	}
	cout << shichigo[target].size() << endl;
	return 0;
}