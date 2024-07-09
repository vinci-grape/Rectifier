#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    string s, t;
    cin >> s >> t;
    map < char, int > freqs;
    map < char, int > freqt;
    int yay = 0, whoops = 0;
    for ( int i = 0 ; i < s.length ( ) ; i++ ) {
        if ( freqs.find ( s [ i ] )!= freqs.end ( ) )
            freqs [ s [ i ] ] += 1;
        else
            freqs [ s [ i ] ] = 1;
    }
    for ( int i = 0 ; i < t.length ( ) ; i++ ) {
        if ( freqt.find ( t [ i ] )!= freqt.end ( ) )
            freqt [ t [ i ] ] += 1;
        else
            freqt [ t [ i ] ] = 1;
    }
    for ( auto it = freqs.begin ( ) ; it!= freqs.end ( ) ; it++ ) {
        while ( it -> second > 0 && freqt.find ( it -> first )!= freqt.end ( ) && freqt [ it -> first ] > 0 ) {
            yay += 1;
            it -> second -= 1;
            freqt [ it -> first ] -= 1;
        }
    }
    for ( auto it = freqs.begin ( ) ; it!= freqs.end ( ) ; it++ ) {
        while ( it -> second > 0 ) {
            if ( it -> first >= 'a' && it -> first <= 'z' && freqt.find ( it -> first - 'a' + 'A' )!= freqt.end ( ) && freqt [ it -> first - 'a' + 'A' ] > 0 ) {
                whoops += 1;
                it -> second -= 1;
                freqt [ it -> first - 'a' + 'A' ] -= 1;
            }
            else if ( it -> first >= 'A' && it -> first <= 'Z' && freqt.find ( it -> first - 'A' + 'a' )!= freqt.end ( ) && freqt [ it -> first - 'A' + 'a' ] > 0 ) {
                whoops += 1;
                it -> second -= 1;
                freqt [ it -> first - 'A' + 'a' ] -= 1;
            }
            else
                break;
        }
    }
    cout << yay << " " << whoops << endl;
    return 0;
}