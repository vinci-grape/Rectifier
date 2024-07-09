#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    string v1, v2;
    int t, d;
    cin >> v1 >> v2 >> t >> d;
    int v1_ = atoi ( v1.c_str ( ) );
    int v2_ = atoi ( v2.c_str ( ) );
    int t_ = atoi ( t.c_str ( ) );
    int d_ = atoi ( d.c_str ( ) );
    int a = 1;
    int v = v1_;
    int distance = 0;
    for ( int i = 0; i < t_; i++ ) {
        if ( v - v2_ > ( t_ - i - 1 ) * d_ ) {
            a *= - 1;
            v = ( t_ - i - 1 ) * d_ + v2_;
        }
        distance += v;
        v += a * d_;
    }
    cout << distance << endl;
    return 0;
}