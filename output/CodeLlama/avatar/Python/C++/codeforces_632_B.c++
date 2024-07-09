#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    vector < pair < int , string > > pieces;
    for ( int i = 0 ; i < n ; i ++ ) {
        int x;
        string s;
        cin >> x >> s;
        pieces.push_back ( make_pair ( x , s ) );
    }
    cout << Bob_sMaxStrength ( pieces ) << endl;
    return 0;
}
int Bob_sMaxStrength ( vector < pair < int , string > > pieces ) {
    int pScore = sScore = pMaxScore = sMaxScore = 0;
    for ( int i = 0 ; i < pieces.size ( ) ; i ++ ) {
        if ( pieces [ i ].second == "B" ) {
            pScore += pieces [ i ].first;
            if ( pScore > pMaxScore ) {
                pMaxScore = pScore;
            }
        } else {
            pScore -= pieces [ i ].first;
        }
    }
    for ( int i = pieces.size ( ) - 1 ; i >= 0 ; i -- ) {
        if ( pieces [ i ].second == "A" ) {
            sScore += pieces [ i ].first;
            if ( sScore > sMaxScore ) {
                sMaxScore = sScore;
            }
        } else {
            sScore -= pieces [ i ].first;
        }
    }
    if ( pMaxScore > sMaxScore ) {
        return pMaxScore;
    }
    return sMaxScore;
}