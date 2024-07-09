#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <string> cake;
    for ( int i = 0 ; i < n ; i++ ) {
        string line;
        cin >> line;
        cake.push_back(line);
    }
    int chocCount = 0;
    int nfat = 1;
    int happiness = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( cake[i][j] == 'C' ) {
                chocCount++;
            }
        }
        if ( chocCount > 1 ) {
            for ( int i = chocCount ; i > chocCount - 2 ; i-- ) {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        nfat = 1;
        chocCount = 0;
    }
    int posCount = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( cake[i][j] == 'C' ) {
                chocCount++;
            }
        }
        if ( chocCount > 1 ) {
            for ( int i = chocCount ; i > chocCount - 2 ; i-- ) {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        nfat = 1;
        chocCount = 0;
    }
    cout << happiness << endl;
    return 0;
}