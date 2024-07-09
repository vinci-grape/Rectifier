#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg(x...) cerr << #x << " = " << (x) << endl;
#define setrecursionlimit(x) cout << "setrecursionlimit(" << x << ") = " << setrecursionlimit(x) << endl;
#define input(x) cin >> (x)
#define LMIIS(x) cin >> (x)
#define II(x) cin >> (x)
#define P 1000000007
#define INF 1000000000
int main ( ) {
    setrecursionlimit ( 1000000 );
    string sa , sb;
    cin >> sa >> sb;
    ll a = stoll ( sa );
    ll b = stoll ( sb );
    cout << a * b / 100 << endl;
    return 0;
}