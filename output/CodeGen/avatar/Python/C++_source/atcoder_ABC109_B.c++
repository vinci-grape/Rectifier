#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    string s[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> s[i];
    }
    map <char, int> m;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < s[i].length() ; j++ ) {
            m[s[i][j]]++;
        }
    }
    int cnt = 0;
    for ( map <char, int>::iterator it = m.begin() ; it!= m.end() ; it++ ) {
        if ( it->second >= 2 ) {
            cnt++;
        }
    }
    if ( cnt >= 2 ) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}