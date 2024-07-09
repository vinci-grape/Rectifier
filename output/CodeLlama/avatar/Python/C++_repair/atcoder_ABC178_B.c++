#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li(x) scanf("%lld", &x)
#define ld(x) scanf("%lf", &x)
#define si(x) scanf("%d", &x)
#define ss(x) scanf("%s", x)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << max(max(max(a * c, b * d), a * d), b * c);
  return 0;
}