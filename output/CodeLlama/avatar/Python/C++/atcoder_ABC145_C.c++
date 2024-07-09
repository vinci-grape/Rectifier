#include <bits/stdc++.h>
using namespace std;
void solve ( int N , vector < int > x , vector < int > y ) {
    vector < int > indices ( N );
    for ( int i = 0 ; i < N ; i++ ) {
        indices [ i ] = i;
    }
    vector < double > distances;
    do {
        double total_distance = 0;
        for ( int i = 0 ; i < N - 1 ; i++ ) {
            int f = indices [ i ];
            int t = indices [ i + 1 ];
            double distance = sqrt ( ( x [ t ] - x [ f ] ) * ( x [ t ] - x [ f ] ) + ( y [ t ] - y [ f ] ) * ( y [ t ] - y [ f ] ) );
            total_distance += distance;
        }
        distances.push_back ( total_distance );
    } while ( next_permutation ( indices.begin ( ) , indices.end ( ) ) );
    double result = 0;
    for ( int i = 0 ; i < distances.size ( ) ; i++ ) {
        result += distances [ i ];
    }
    result /= distances.size ( );
    cout << result << endl;
    return;
}
int main ( ) {
    int N;
    cin >> N;
    vector < int > x ( N );
    vector < int > y ( N );
    for ( int i = 0 ; i < N ; i++ ) {
        cin >> x [ i ];
        cin >> y [ i ];
    }
    solve ( N , x , y );
    return 0;
}