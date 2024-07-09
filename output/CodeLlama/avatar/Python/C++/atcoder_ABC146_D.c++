#include <bits/stdc++.h>
using namespace std;
int bfs ( int v , int N , vector < int > G [ ] , map < pair < int , int > , int > & E ) {
    vector < int > visited ( N , 0 );
    queue < int > queue;
    int K = - 1;
    vector < int > node2color ( N , - 1 );
    queue.push ( v );
    visited [ v ] = 1;
    while ( !queue.empty ( ) ) {
        int q = queue.front ( );
        queue.pop ( );
        int color = 0;
        for ( int nex : G [ q ] ) {
            if ( visited [ nex ] )
                continue;
            visited [ nex ] = 1;
            color += 1;
            if ( color == node2color [ q ] )
                color += 1;
            node2color [ nex ] = color;
            E [ make_pair ( min ( q , nex ) , max ( q , nex ) ) ] = color;
            queue.push ( nex );
        }
        K = max ( K , color );
    }
    return K;
}
int main ( ) {
    int N;
    cin >> N;
    vector < int > G [ N ];
    map < pair < int , int > , int > E;
    for ( int i = 0 ; i < N - 1 ; i ++ ) {
        int a , b;
        cin >> a >> b;
        G [ a - 1 ].push_back ( b - 1 );
        G [ b - 1 ].push_back ( a - 1 );
        E [ make_pair ( a - 1 , b - 1 ) ] = 0;
    }
    int K = bfs ( 0 , N , G , E );
    cout << K << endl;
    for ( auto & e : E )
        cout << e.second << endl;
    return 0;
}