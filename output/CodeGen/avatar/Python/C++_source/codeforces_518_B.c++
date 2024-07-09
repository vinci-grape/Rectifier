#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
using namespace std;

int main ( ) {
    string s, t ;
    cin >> s >> t ;
    map < char, int > freqs ;
    map < char, int > freqt ;
    int yay, whoops ;
    for ( int i = 0 ; i < s.size ( ) ; i++ ) {
        if ( s[i] in freqs ) {
            freqs [ s[i] ] += 1 ;
        }
        else {
            freqs [ s[i] ] = 1 ;
        }
    }
    for ( int i = 0 ; i < t.size ( ) ; i++ ) {
        if ( t[i] in freqt ) {
            freqt [ t[i] ] += 1 ;
        }
        else {
            freqt [ t[i] ] = 1 ;
        }
    }
    for ( int i = 0 ; i < s.size ( ) ; i++ ) {
        while ( freqs [ s[i] ] > 0 and s[i] in freqt and freqt [ s[i] ] > 0 ) {
            yay += 1 ;
            freqs [ s[i] ] -= 1 ;
            freqt [ s[i] ] -= 1 ;
        }
    }
    for ( int i = 0 ; i < s.size ( ) ; i++ ) {
        while ( freqs [ s[i] ] > 0 ) {
            if ( s[i].islower ( ) and s[i].upper ( ) in freqt and freqt [ s[i].upper ( ) ] > 0 ) {
                whoops += 1 ;
                freqs [ s[i] ] -= 1 ;
                freqt [ s[i].upper ( ) ] -= 1 ;
            }
            else if ( s[i].isupper ( ) and s[i].lower ( ) in freqt and freqt [ s[i].lower ( ) ] > 0 ) {
                whoops += 1 ;
                freqs [ s[i] ] -= 1 ;
                freqt [ s[i].lower ( ) ] -= 1 ;
            }
            else {
                break ;
            }
        }
    }
    cout << yay << " " << whoops << endl ;
    return 0 ;
}