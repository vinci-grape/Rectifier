#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int ans = 1;
    int sumL = 0;
    string s;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> s;
        int L = s.length();
        if ( L > 1 ) {
            if ( L > n ) {
                cout << "Impossible" << endl;
                exit(0);
            }
            if ( sumL + L + ( sumL > 0 ) > n ) {
                ans++;
                sumL = L;
            }
            else {
                sumL = sumL + L + ( sumL > 0 );
            }
        }
    }
    cout << ans << endl;
    return 0;
}