#include <iostream>
#include <queue>
using namespace std;

int main ( ) {
    int n, m;
    cin >> n >> m;
    priority_queue < int, vector < int >, greater < int > > x;
    priority_queue < int, vector < int >, greater < int > > y;
    for ( int i = 0 ; i < n ; i++ ) {
        int day, salary;
        cin >> day >> salary;
        x.push ( - day, - salary );
    }
    while (! x.empty ( ) ) {
        int d, s;
        d = - x.top ( ).first;
        s = x.top ( ).second;
        if ( m - y.size ( ) >= d ) {
            y.push ( - s );
        } else {
            y.push ( - s );
            y.pop ( );
        }
        x.pop ( );
    }
    cout << y.size ( ) << endl;
    return 0;
}