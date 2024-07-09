#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cassert>
#include <ctime>
#include <cstdint>
#include <climits>
#include <iomanip>
using namespace std;

#define ll long long
#define INF INT_MAX
#define MOD 1000000007

#define SIZE(x) (int)x.size()
#define PB(x) push_back(x)
#define FOR(i,a,b) for(int i = (a), _b = (b); i <= _b; i++)
#define FOR0(i,b) for(int i = 0, _b = (b); i < _b; i++)
#define FORD(i,a,b) for(int i = (a), _b = (b); i >= _b; i--)
#define FORD0(i,b) for(int i = 0, _b = (b); i >= _b; i--)
#define REP(i,n) for(int i = 0, _n = (n); i < _n; i++)
#define REP0(i,n) for(int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for(int i = (n)-1; i >= 0; i--)
#define REPD0(i,n) for(int i = (n)-1; i >= 0; i--)
#define ALL(c) (c).begin(), (c).end()
#define REVALL(c) (c).rbegin(), (c).rend()
#define COUNT(c) (int)((c).size())
#define MP make_pair
#define X first
#define Y second
#define SZ size()
#define PB push_back
#define IN input
#define OUT output
#define MAX 1000000
#define EPS 1e-9
#define INF -1
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VII;
typedef vector<string> VS;
typedef vector< vector<int> > VVI;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    REP(i, n) {
        if (a[i] > k) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}