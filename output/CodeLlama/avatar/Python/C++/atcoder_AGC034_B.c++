#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;
#define inf 1000000000
#define mod 7+1000000007
int gcd ( int a , int b ) {
    if ( b == 0 ) return a;
    return gcd ( b , a % b );
}
int main ( ) {
    ios_base::sync_with_stdio ( false );
    cin.tie ( 0 );
    string s;
    cin >> s;
    string t = "";
    int i = 0;
    while ( i < s.size ( ) ) {
        if ( s [ i ] == 'A' ) {
            t += 'A';
            i++;
        } else if ( s [ i ] == 'B' ) {
            if ( i < s.size ( ) - 1 ) {
                if ( s [ i + 1 ] == 'C' ) {
                    t += 'D';
                    i += 2;
                } else {
                    t += 'X';
                    i++;
                }
            } else {
                t += 'X';
                i++;
            }
        } else {
            t += 'X';
            i++;
        }
    }
    int total = 0;
    int numA = 0;
    for ( int i = 0 ; i < t.size ( ) ; i++ ) {
        if ( t [ i ] == 'X' ) {
            numA = 0;
        } else {
            if ( t [ i ] == 'A' ) numA++;
            else total += numA;
        }
    }
    cout << total << endl;
    return 0;
}