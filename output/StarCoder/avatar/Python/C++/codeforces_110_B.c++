#include <iostream>
using namespace std;

int main ( ) {
    string LUCKY = "abcd";
    int n;
    cin >> n;
    string s = "";
    for ( int i = 0; i < n; i++ ) {
        s += LUCKY [ i % 4 ];
    }
    cout << s;
    return 0;
}