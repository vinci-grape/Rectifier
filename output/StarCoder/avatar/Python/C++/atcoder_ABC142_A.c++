#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    double t = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( i + 1 & 1 ) t += 1;
    }
    cout << t / n << endl;
    return 0;
}