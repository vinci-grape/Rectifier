#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    string line;
    cin >> line;
    map < char , int > bought_count;
    for ( auto & c : line ) {
        bought_count [ c ] ++;
    }
    cin >> line;
    map < char , int > made_cout;
    for ( auto & c : line ) {
        made_cout [ c ] ++;
    }
    int res = 0;
    for ( auto & c : made_cout ) {
        if ( bought_count.find ( c.first ) == bought_count.end ( ) ) {
            cout << - 1 << endl;
            return 0;
        }
        res += min ( bought_count [ c.first ] , c.second );
    }
    cout << res << endl;
    return 0;
}