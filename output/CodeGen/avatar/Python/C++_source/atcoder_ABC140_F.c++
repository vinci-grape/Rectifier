#include <iostream>
#include <algorithm>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    int S[ N ];
    for ( int i = 0; i < N; ++i ) {
        cin >> S[ i ];
    }
    sort( S, S + N, greater<int>() );
    reverse( S, S + N );
    int flag[ N ];
    int cur[ N ];
    int j = 0;
    for ( int i = 0; i < N; ++i ) {
        if (!flag[ i ] && S[ i ] < cur[ j ] ) {
            cur[ j++ ] = S[ i ];
            flag[ i ] = false;
        }
    }
    for ( int i = 0; i < N; ++i ) {
        if ( flag[ i ] ) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}