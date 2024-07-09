#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check ( vector<int> & lis, int k, int mid ) {
    for ( int i = 0 ; i < lis.size ( ) ; i++ ) {
        if ( lis[i] % mid == 0 ) {
            k += 1;
        }
        k -= ( lis[i] / mid );
    }
    return k >= 0;
}

int main ( ) {
    int n, k;
    cin >> n >> k;
    vector<int> lis ( n );
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> lis[i];
    }
    int a, b;
    a = 1;
    b = max ( lis );
    while ( a <= b ) {
        int mid = ( a + b ) / 2;
        if ( check ( lis, k, mid ) ) {
            b = mid - 1;
        } else {
            a = mid + 1;
        }
    }
    cout << b << endl;
    return 0;
}