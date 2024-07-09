#pragma region
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <list>
#include <iomanip>
#include <cstdint>
#include <cstdlib>

using namespace std;
typedef long long ll;
//#define rep(i, s, e) for (int(i) = (s); (i) < (e); ++(i))
#define rep(i, e) for (int(i) = 0; (i) < (e); ++(i))
#define rrep(i, s) for (int(i) = (s) - 1; (i) >= 0; --(i))
#define all(x) x.begin(),x.end()
#pragma endregion


int main()
{
	ll n, k; cin >> n >> k;
	ll MOD = 1e9 + 7;
	ll mx = n * (n + 1) / 2 - (n - k)*(n - k + 1) / 2;
	ll mn = k * (k - 1) / 2;
	ll res = 0;
	for (int i = k; i <= n + 1; ++i)
	{
		res += mx - mn + 1;
		mx += n - i;
		mn += i;
		res %= MOD;
	}
	print(res)
}