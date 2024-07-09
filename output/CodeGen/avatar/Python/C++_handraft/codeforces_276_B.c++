#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

int main ( ) {
    list < string > s;
    string str;
    while ( cin >> str ) {
        s.push_back ( str );
    }
    map < string, int > dt;
    for ( auto it = s.begin ( ) ; it!= s.end ( ) ; it++ ) {
        if ( dt.find ( *it )!= dt.end ( ) ) {
            dt[*it] += 1;
        }
        else {
            dt[*it] = 1;
        }
    }
    int cnt = 0;
    bool x = true;
    for ( auto it = dt.begin ( ) ; it!= dt.end ( ) ; it++ ) {
        if ( it->second % 2!= 0 && cnt < 1 ) {
            cnt += 1;
        }
        else if ( it->second % 2!= 0 && cnt >= 1 ) {
            x = false;
            break;
        }
    }
    if ( x ) {
        cout << "First" << endl;
    }
    else if (!x && s.size ( ) % 2 == 0 ) {
        cout << "Second" << endl;
    }
    else if (!x && s.size ( ) % 2!= 0 ) {
        cout << "First" << endl;
    }
    return 0;
}