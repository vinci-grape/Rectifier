#include <iostream>
#include <cmath>
using namespace std;
int next_int ( ) {
    int x;
    cin >> x;
    return x;
}
int next_ints ( ) {
    string s;
    cin >> s;
    int x[1000];
    int i = 0;
    for ( int j = 0; j < s.length ( ); j++ ) {
        if ( s[j] != ' ' ) {
            x[i] = s[j] - '0';
            i++;
        }
    }
    return x;
}
int main ( ) {
    int n = next_int ( );
    int t = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( i + 1 & 1 ) {
            t++;
        }
    }
    cout << t / n << endl;
    return 0;
}