#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cassert>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug.

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<double, double> dd;
typedef pair<int, ii> iii;
typedef pair<double, dd> ddd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vi> vii;
typedef vector<vll> vll;

const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);

#define MAXN 100010

int n, m;
int A[MAXN], B[MAXN], C[MAXN];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", A + i);
    for (int i = 0; i < m; i++) scanf("%d", B + i);
    for (int i = 0; i < m; i++) scanf("%d", C + i);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a = A[i], b = B[i], c = C[i];
        if (a == b && b == c) continue;
        if (a == b || b == c || a == c) {
            ans++;
        }
    }
    printf("%d\n", ans);
}