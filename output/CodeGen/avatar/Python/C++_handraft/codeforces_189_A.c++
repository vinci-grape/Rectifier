#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main ( ) {
    int length;
    int arr[4];
    cin >> length;
    for ( int i = 0 ; i < 4 ; i++ ) {
        cin >> arr[i];
    }
    sort ( arr, arr + 4, greater<int> ( ) );
    if ( length % arr[0] == 0 ) {
        cout << length / arr[0] << endl;
        return 0;
    }
    int ans = 0;
    if ( arr[0] == arr[1] ) {
        int k = 0;
        for ( int i = 0 ; i < length / arr[2] + 1 ; i++ ) {
            int check = length - i * arr[2];
            if ( check >= 0 && check % arr[0] == 0 ) {
                k = check / arr[0];
                ans = max ( ans, k + i );
            }
        }
    } else {
        int k = 0;
        for ( int i = 0 ; i < length / arr[2] + 1 ; i++ ) {
            for ( int j = 0 ; j < length / arr[1] + 1 ; j++ ) {
                int check = length - i * arr[2] - j * arr[1];
                if ( check >= 0 && check % arr[0] == 0 ) {
                    k = check / arr[0];
                    ans = max ( ans, k + i + j );
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}