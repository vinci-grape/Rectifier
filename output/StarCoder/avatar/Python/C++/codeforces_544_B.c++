#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, k, x = 0;
	cin >> n >> k;
	if (k <= max(n * n / 2, n * n - (n * n / 2)))
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i % 2 == j % 2 && x < k)
				{
					cout << "L";
					x++;
				}
				else
					cout << "S";
			}
			cout << endl;
		}
	}
	else
		cout << "NO" << endl;
	return 0;
}