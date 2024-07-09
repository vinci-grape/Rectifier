#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define pii pair<int, int>
#define pll pair<ll, ll>
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<ull> vull;
typedef vector<double> vd;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vull> vvull;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef set<int> si;
typedef set<long long> sll;
typedef set<ull> sull;
typedef set<double> sdouble;
typedef set<pii> spii;
typedef set<pll> spll;
typedef set<vi> svi;
typedef set<vll> svll;
typedef set<vull> svull;
typedef set<vd> svd;
typedef set<string> svs;
typedef multiset<int> msi;
typedef multiset<long long> msll;
typedef multiset<ull> msull;
typedef multiset<double> msdouble;
typedef multiset<pii> mspii;
typedef multiset<pll> mspll;
typedef multiset<vi> msvi;
typedef multiset<vll> msvll;
typedef multiset<vull> msvull;
typedef multiset<vd> msvd;
typedef multiset<string> mss;
typedef map<int, int> mii;
typedef map<long long, long long> mll;
typedef map<ull, ull> mull;
typedef map<double, double> mdouble;
typedef map<pii, int> mpii;
typedef map<pll, int> mpll;
typedef map<vi, int> mvi;
typedef map<vll, int> mvll;
typedef map<vull, int> mvull;
typedef map<vd, int> mvd;
typedef map<string, int> msi;
typedef unordered_map<int, int> umii;
typedef unordered_map<long long, long long> umll;
typedef unordered_map<ull, ull> umull;
typedef unordered_map<double, double> umdouble;
typedef unordered_map<pii, int> umpii;
typedef unordered_map<pll, int> umpll;
typedef unordered_map<vi, int> umvi;
typedef unordered_map<vll, int> umvll;
typedef unordered_map<vull, int> umvull;
typedef unordered_map<vd, int> umvd;
typedef unordered_map<string, int> umsi;
typedef queue<int> qi;
typedef queue<long long> ql;
typedef queue<ull> qu;
typedef queue<double> qd;
typedef queue<pii> qpii;
typedef queue<pll> qpll;
typedef queue<vi> qvi;
typedef queue<vll> qvll;
typedef queue<vull> qvull;
typedef queue<vd> qvd;
typedef priority_queue<int> pqi;
typedef priority_queue<long long> pql;
typedef priority_queue<ull> pqu;
typedef priority_queue<double> pqd;
typedef priority_queue<pii> pqpii;
typedef priority_queue<pll> pqpll;
typedef priority_queue<vi> pqvi;
typedef priority_queue<vll> pqvll;
typedef priority_queue<vull> pqvull;
typedef priority_queue<vd> pqvd;
#define MOD 1000000007
#define MAX 1000005
#define INF 1e18
#define PI acos(-1.0)
#define mem(a, b) memset(a, (b), sizeof(a))
#define pow2(x) ((x) * (x))
#define pow3(x) ((x) * (x) * (x))
#define pow4(x) ((x) * (x) * (x) * (x))
#define pow5(x) ((x) * (x) * (x) * (x) * (x))
#define pow6(x) ((x) * (x) * (x) * (x) * (x) * (x))
#define pow7(x) ((x) * (x) * (x) * (x) * (x) * (x) * (x))
#define pow8(x) ((x) * (x) * (x) * (x) * (x) * (x) * (x) * (x))
#define pow9(x) ((x) * (x) * (x) * (x) * (x) * (x) * (x) * (x) * (x))
#define for1(i, n) for (int i = 1; i <= n; i++)
#define for0(i, n) for (int i = 0; i < n; i++)
#define fr(i, j, n) for (int i = j; i < n; i++)
#define fr1(i, j, n) for (int i = j; i <= n; i++)
#define fr0(i, j, n) for (int i = j; i >= n; i--)
#define fr10(i, j, n) for (int i = j; i >= n; i--)
#define fr00(i, j, n) for (int i = j; i >= n; i--)
#define fr01(i, j, n) for (int i = j; i >= n; i--)
#define fr11(i, j, n) for (int i = j; i <= n; i--)
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pf pair<float, float>
#define X first
#define Y second
#define MAXN 100005
#define INF 1000000000
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define sortallr(x) sort(rall(x))
#define endl "\n"
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test                     \
    int t = 1;                   \
    cin >> t;                    \
    while (t--)
#define fl(i, a, b) for (int i = a; i < b; i++)
#define sort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.rbegin(), v.rend())
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define r_srt(v) sort(v.rbegin(), v.rend())
#define revrs(v) reverse(v.rbegin(), v.rend())
#define TC(t)                     \
    while (t--)                   \
    solve();
#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define read(a) cin >> a;
#define write(a) cout << a;
#define M_PI 3.14159265358979323846
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
#define MAX 100005
#define MOD 1000000007
#define INF 1000000000
#define PI acos(-1.0)
#define mem(a, b) memset(a, (b), sizeof(a))
#define pow2(x) ((x