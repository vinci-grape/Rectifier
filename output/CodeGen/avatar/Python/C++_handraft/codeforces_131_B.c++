#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> w(n);
    for ( int i = 0; i < n; ++i ) {
        cin >> w[i];
    }
    int c = 0;
    for ( int i = 0; i < n; ++i ) {
        if ( w[i] == 0 ) {
            c += w[i] * ( w[i] - 1 );
        } else {
            if (find(w.begin(), w.end(), -w[i]) != w.end()) {
                c += w[i] * w[- w[i]];
            }
        }
    }
    cout << c / 2 << endl;
    return 0;
}