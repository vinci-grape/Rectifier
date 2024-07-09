#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <string>
#include <sstream>
#include <cstdint>
#include <cassert>
#include <cctype>
using namespace std;

#define DEBUG 0
#define INF (int)1e9
#define EPS 1e-9
#define LS(x) x
#define LL(x) x
#define PI acos(-1.0)
#define PR(x) cout << #x << " = " << x << endl;
#define PRL(x) cout << #x << " = " << x << "L" << endl;
#define PRLL(x) cout << #x << " = " << x << "L" << endl;
#define PRC(x) cout << #x << " = " << x << " (mod " << MOD << ")" << endl;
#define PRCLN(x) cout << #x << " = " << x << " (mod " << MOD << ")" << endl << endl;
#define PB push_back
#define max(a, b)  (a < b? b : a)
#define min(a, b)  (a > b? b : a)
#define sq(a) a * a
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)
#define mem(a, num) memset(a, num, sizeof(a))
#define fori(i, s, e) for(int i = s; i < e; ++i)
#define forl(i, s, e) for(ll i = s; i < e; ++i)
#define forir(i, s, e) for(int i = s; i >= e; --i)
#define forlr(i, s, e) for(ll i = s; i >= e; --i)
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)
#define mem(a, num) memset(a, num, sizeof(a))
#define fori(i, s, e) for(int i = s; i < e; ++i)
#define forl(i, s, e) for(ll i = s; i < e; ++i)
#define forir(i, s, e) for(int i = s; i >= e; --i)
#define forlr(i, s, e) for(ll i = s; i >= e; --i)
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)
#define mem(a, num) memset(a, num, sizeof(a))
#define fori(i, s, e) for(int i = s; i < e; ++i)
#define forl(i, s, e) for(ll i = s; i < e; ++i)
#define forir(i, s, e) for(int i = s; i >= e; --i)
#define forlr(i, s, e) for(ll i = s; i >= e; --i)
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)
#define mem(a, num) memset(a, num, sizeof(a))
#define fori(i, s, e) for(int i = s; i < e; ++i)
#define forl(i, s, e) for(ll i = s; i < e; ++i)
#define forir(i, s, e) for(int i = s; i >= e; --i)
#define forlr(i, s, e) for(ll i = s; i >= e; --i)
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)
#define mem(a, num) memset(a, num, sizeof(a))
#define fori(i, s, e) for(int i = s; i < e; ++i)
#define forl(i, s, e) for(ll i = s; i < e; ++i)
#define forir(i, s, e) for(int i = s; i >= e; --i)
#define forlr(i, s, e) for(ll i = s; i >= e; --i)
#define INF 10000000000000007
#define PI acos(-1.0)
#define MAX 1000000007
#define EPS 1e-9
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vs vector<string>
#define println printf("\n")
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define max(a, b)  (a > b? a : b)
#define min(a, b)  (a < b? a : b)