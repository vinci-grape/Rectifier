#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;
#define all(x) x.begin(), x.end()
#define len(x) (x).length()
#define sqr(x) (x) * (x)
#define x first
#define y second
#define pb push_back
#define fi first
#define se second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ull unsigned long long
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string c;
    cin >> c;
    string a = "abcdefghijklmnopqrstuvwxyz";
    int i = a.find(c);
    cout << a[i+1];
    return 0;
}