#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main ( ) {
    int n, d;
    cin >> n >> d;
    vector < vector < int > > points ( n );
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < d ; j++ ) {
            int tmp;
            cin >> tmp;
            points[i].push_back ( tmp );
        }
    }
    int count = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( int ( round ( sqrt ( pow ( points[i][0] - points[j][0], 2 ) + pow ( points[i][1] - points[j][1], 2 ) ) ) ) == 0 ) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}