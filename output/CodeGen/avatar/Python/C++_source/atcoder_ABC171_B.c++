#include <iostream>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }
    sort ( arr, arr + n );
    cout << sum ( arr, arr + k ) << endl;
    return 0;
}