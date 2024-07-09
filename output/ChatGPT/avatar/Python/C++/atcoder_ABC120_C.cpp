#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <cstring>
#include <bitset>
#include <cassert>
#include <iomanip>
#include <fstream>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <random>
#include <functional>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef pair<double, int> pdi;
typedef pair<int, pii> pipii;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl "\n"
#define debug(x) cerr << #x << " is " << x << endl

const double PI = acos(-1.0);
const double eps = 1e-9;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    if (set<char>(s.begin(), s.end()).size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    map<char, int> a;
    for (char c : s) {
        a[c]++;
    }

    int ans = INF;
    for (auto it : a) {
        ans = min(ans, it.second);
    }

    cout << ans * 2 << endl;


    return 0;
}