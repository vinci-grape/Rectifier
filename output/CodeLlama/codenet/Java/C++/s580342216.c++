//--- pB ---//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <iomanip>
#include <bitset>

#define INF 2147483647
#define pi acos(-1.0)
#define EPS 1e-9
#define LL long long
#define LD long double
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626433832795

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N, K;
		cin >> N >> K;
		int len = 0;
		while (N > 0)
		{
			N /= K;
			len++;
		}
		cout << len << endl;
	}
	return 0;
}