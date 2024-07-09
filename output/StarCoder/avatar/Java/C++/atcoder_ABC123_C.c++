#include <bits/stdc++.h> 
using namespace std ; 
int main ( ) { 
    long long N ; 
    cin >> N ; 
    long long min = 0 ; 
    for ( int i = 0 ; i < 5 ; i ++ ) { 
        if ( i == 0 ) min = cin >> min ; 
        else min = min < cin >> min? min : cin >> min ; 
    } 
    cout << ( long long ) ceil ( ( double ) N / min ) + 4 << endl ; 
}