#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, num;
    cin >> n >> num;
    set < int > num_set;
    set < int > two_times_set;
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        num_set.insert ( temp );
    }
    for ( int i : num_set ) {
        for ( int j = 1; j <= 30; j++ ) {
            i /= 2;
            if ( i % 2 != 0 ) {
                two_times_set.insert ( j );
                break;
            }
        }
        if ( two_times_set.size ( ) != 1 ) {
            cout << 0 << endl;
            break;
        }
    }
    if ( two_times_set.size ( ) == 1 ) {
        vector < int > num_list ( num_set.begin ( ), num_set.end ( ) );
        int lcm = num_list [ 0 ];
        for ( int i = 1; i < num_list.size ( ); i++ ) {
            lcm = lcm * num_list [ i ] / __gcd ( lcm, num_list [ i ] );
        }
        cout << ( num - lcm / 2 ) / lcm + 1 << endl;
    }
    return 0;
}