#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    vector < vector < int > > input_array;
    for ( int i = 0 ; i < n ; i++ ) {
        int S, R, H, C;
        cin >> S >> R >> H >> C;
        input_array.push_back ( { S, R, H, C } );
    }
    vector < vector < int > > outdated;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( input_array [ i ] [ 0 ] < input_array [ j ] [ 0 ] and input_array [ i ] [ 1 ] < input_array [ j ] [ 1 ] and input_array [ i ] [ 2 ] < input_array [ j ] [ 2 ] ) {
                outdated.push_back ( input_array [ i ] );
            }
        }
    }
    set < vector < int > > outdated_set ( outdated.begin ( ), outdated.end ( ) );
    int minimum_cost = 100000;
    int input_number = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        vector < int > current_item = input_array [ i ];
        int cost = current_item [ 3 ];
        if ( current_item not in outdated_set and cost < minimum_cost ) {
            minimum_cost = current_item [ 3 ];
            input_number = i + 1;
        }
    }
    cout << input_number;
    return 0;
}