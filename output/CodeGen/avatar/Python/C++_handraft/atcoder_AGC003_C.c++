#include <iostream>
#include <algorithm>
using namespace std;

int main ( )
{
    int N;
    cin >> N;
    int A[ N ];
    for ( int i = 0; i < N; ++i )
        cin >> A[ i ];
    sort ( A, A + N );
    int cnt = 0;
    for ( int i = 0; i < N; ++i )
    {
        int d = ( A[ i ] % N ) % 2;
        if ( d % 2!= i % 2 )
            cnt += 1;
    }
    cout << cnt / 2 << endl;
    return 0;
}