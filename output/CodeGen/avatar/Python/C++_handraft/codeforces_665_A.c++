#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

int main ( ) {
    int a, at, b, bt, t1, t2, st, fin, now, ans ;
    cin >> a >> at >> b >> bt >> t1 >> t2 >> st >> fin >> now ;
    ans = 0 ;
    while ( now < fin && now < 1140 ) {
        if ( now + bt > st ) {
            ans += 1 ;
        }
        now += b ;
    }
    cout << ans << endl ;
    return 0 ;
}