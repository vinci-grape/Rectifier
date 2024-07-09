#include <iostream>
#include <string>
using namespace std;
int main ( ) {
    string s;
    int num_g, num_p = 0, score = 0;
    cin >> s;
    for ( int i = 0 ; i < s.size ( ) ; i++ ) {
        if ( s[i] == 'g' ) {
            if ( num_g - num_p > 0 ) {
                score += 1;
                num_p += 1;
            }
            else {
                score = score;
                num_g += 1;
            }
        }
        else if ( s[i] == 'p' ) {
            if ( num_g - num_p > 0 ) {
                score = score;
                num_p += 1;
            }
            else {
                score -= 1;
                num_g += 1;
            }
        }
    }
    cout << score << endl;
    return 0;
}