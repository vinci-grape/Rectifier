#include <bits/stdc++.h>
using namespace std;

int check ( int lis[], int k, int mid ) {
    int k = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( lis[i] % mid == 0 ) {
            k++;
        }
        k -= lis[i] / mid;
    }
    return k >= 0;
}

int main() {
    int n, k;
    cin >> n >> k;
    int lis[n];
    for ( int i = 0; i < n; i++ ) {
        cin >> lis[i];
    }
    int a = 1, b = *max_element(lis, lis + n);
    int ans = b;
    while ( a <= b ) {
        int mid = ( a + b ) / 2;
        if ( check(lis, k, mid) ) {
            ans = mid;
            b = mid - 1;
        } else {
            a = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}