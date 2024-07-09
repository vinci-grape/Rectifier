#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main ( ) {
    string S;
    cin >> S;
    set <char> Sa;
    map <char, int> c;
    for ( int i = 0; i < S.size(); i++ ) {
        Sa.insert ( S[i] );
        c[S[i]]++;
    }
    if ( Sa.size()!= 2 ) {
        cout << "No" << endl;
        return 0;
    }
    for ( set <char>::iterator it = Sa.begin(); it!= Sa.end(); it++ ) {
        if ( c[*it]!= 2 ) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}