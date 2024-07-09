#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    int arr[100];
    int ans[100];
    int mx;
    cin >> n;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }
    mx = arr[n-1];
    for ( int i = n-2 ; i >= 0 ; i-- ) {
        ans[i] = max(0,mx-arr[i]+1);
        if ( arr[i] > mx ) {
            mx = arr[i];
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}