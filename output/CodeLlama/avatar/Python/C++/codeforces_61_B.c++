#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define sl(n) scanf("%lld", &n)
#define si(n) scanf("%d", &n)
#define sd(n) scanf("%lf", &n)
#define pll pair <ll, ll>
#define pii pair <int, int>
#define mp make_pair
#define pb push_back
#define inf (1LL << 62)
#define loop(i, start, stop, inc) for(ll i = start; i <= stop; i += inc)
#define for1(i, stop) for(ll i = 1; i <= stop; i++)
#define for0(i, stop) for(ll i = 0; i < stop; i++)
#define rep1(i, start) for(ll i = start; i >= 1; i--)
#define rep0(i, start) for(ll i = (start-1); i >= 0; i--)
#define ms(n, i) memset(n, i, sizeof(n))
#define casep(n) printf("Case %lld:", ++n)
#define pn printf("\n")
#define pf printf
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool valid ( ll i , ll j , ll n , ll m ) {
    if ( i < n && i >= 0 && j >= 0 && j < m ) return true;
    return false;
}

ll sumn ( ll i , ll n ) {
    return ( n - i ) * ( i + n ) / 2;
}

ll sqfun ( ll a , ll b , ll c ) {
    return ( - b + sqrt ( b * b - 4 * a * c ) ) / 2 * a;
}

ll value ( ) {
    ll a , b , c;
    cin >> a >> b >> c;
    return mp ( a , mp ( b , c ) );
}

ll values ( ) {
    ll a , b , c;
    cin >> a >> b >> c;
    return mp ( a , mp ( b , c ) );
}

vector <ll> inlst ( ) {
    ll n;
    cin >> n;
    vector <ll> v ( n );
    for ( ll i = 0 ; i < n ; i++ ) cin >> v[i];
    return v;
}

vector <ll> inlsts ( ) {
    ll n;
    cin >> n;
    vector <ll> v ( n );
    for ( ll i = 0 ; i < n ; i++ ) cin >> v[i];
    return v;
}

ll inp ( ) {
    ll n;
    cin >> n;
    return n;
}

ll inps ( ) {
    ll n;
    cin >> n;
    return n;
}

string instr ( ) {
    string s;
    cin >> s;
    return s;
}

vector <string> stlst ( ) {
    ll n;
    cin >> n;
    vector <string> v ( n );
    for ( ll i = 0 ; i < n ; i++ ) cin >> v[i];
    return v;
}

string f ( string s ) {
    string r = "";
    for ( char i : s ) {
        if ( i != '-' && i != ';' && i != '_' ) r += tolower ( i );
    }
    return r;
}

void solve ( ) {
    vector <string> l;
    for ( ll i = 0 ; i < 3 ; i++ ) {
        string s;
        cin >> s;
        l.pb ( f ( s ) );
    }
    auto t = permutations ( l.begin ( ) , l.end ( ) );
    l.clear ( );
    for ( auto i : t ) l.pb ( "".join ( i ) );
    ll n;
    cin >> n;
    for ( ll i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s;
        if ( f ( s ) in l ) pf ( "ACC\n" );
        else pf ( "WA\n" );
    }
}

int main ( ) {
    fastio;
    solve ( );
    return 0;
}