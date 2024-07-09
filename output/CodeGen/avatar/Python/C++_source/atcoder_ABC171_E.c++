#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define N 100

int main ( ) {
    int n;
    int a[N];
    int total;
    scanf ( "%d", &n );
    for ( int i = 0 ; i < n ; i++ ) {
        scanf ( "%d", &a[i] );
    }
    total = reduce ( xor, a, 0 );
    cout << "The total is " << total << endl;
    return 0;
}