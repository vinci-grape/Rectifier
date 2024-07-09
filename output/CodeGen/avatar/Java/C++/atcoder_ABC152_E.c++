#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cassert>
using namespace std;

typedef long long ll;
typedef double lf;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sqr(x) ((x) * (x))
#define REP(i, x, y) for(int i = (x); i < (y); ++i)
#define REP2(i, x, y) for(int i = (x); i <= (y); ++i)
#define REPD(i, x, y) for(int i = (x); i >= (y); --i)
#define REPC(i, x, a, b) for(int i = (x); (a) <= i && i <= (b); ++i)
#define foreach(c, itr) for(__typeof((c).begin()) itr = (c).begin(); itr!= (c).end(); itr++)
#define ALL(a) (a).begin(), (a).end()
#define inbounds(i, j, a, b) ((i) >= (a) && (i) <= (b) && (j) >= (a) && (j) <= (b))
#define bitcount(n) __builtin_popcount(n)
#define DEBUG(x) {cerr << #x << " = "; cerr << x << endl;}
#define DEBUGV(x) {cerr << #x << " = "; cerr << vector<int>(x, x + (x.size() + 1)) << endl;}
#define print(x) cout << #x << " = " << x << endl;

const int MOD = 1000000007;
const int INF = (int) 1e9;
const int MAX = (int) 1e5;
const int des = (int) 1e9;

template<typename T> void chmin(T& a, T b) { if (b < a) a = b; }
template<typename T> void chmax(T& a, T b) { if (a < b) a = b; }

int N, M;
int A[1005];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < M; i++) {
        int j = i + 1;
        while (j < M && A[i] == A[j]) {
            j++;
        }
        if (j - i > ans) {
            ans = j - i;
        }
    }
    cout << ans << endl;
    return 0;
}