#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main ( ) {
    int num, k;
    cin >> num >> k;
    int arr[ num ];
    for ( int i = 0 ; i < num ; i++ ) {
        cin >> arr[ i ];
    }
    sort ( arr, arr + num );
    set < int > different;
    int temp = 0;
    for ( int i = 0 ; i < num ; i++ ) {
        if ( arr[ i ] % k!= 0 || arr[ i ] / k!= arr[ i ] / k ) {
            different.insert ( arr[ i ] );
        }
        temp = max ( different.size ( ), temp );
    }
    cout << temp << endl;
    return 0;
}