#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
vector < ll > graph [ 100000 ];
ll N , K;
ll dfs ( ll fro , ll to , ll f ) {
    ll caseNum = f;
    ll colorNum = K - 1;
    if ( f == K )
        colorNum = K - 2;
    for ( ll u : graph [ fro ] ) {
        if ( u == to )
            continue;
        ll pat = dfs ( u , fro , colorNum );
        if ( pat == 0 ) {
            caseNum = 0;
            break;
        }
        caseNum = ( caseNum * pat ) % mod;
        colorNum--;
    }
    return caseNum;
}
int main () {
    cin >> N >> K;
    for ( ll i = 0 ; i < N - 1 ; i++ ) {
        ll a , b;
        cin >> a >> b;
        graph [ a - 1 ].push_back ( b - 1 );
        graph [ b - 1 ].push_back ( a - 1 );
    }
    ll ans = dfs ( 0 , -1 , K );
    cout << ans << endl;
    return 0;
}