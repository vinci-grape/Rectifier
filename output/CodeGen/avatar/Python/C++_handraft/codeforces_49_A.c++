#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string a;
    cin >> a;
    for ( int i = a.size() - 1; i >= 0; i-- ) {
        if ( a[i] =='' || a[i] == '?' ) continue;
        else {
            if ( a[i] in vo ) cout << "YES" << endl;
            else cout << "NO" << endl;
            break;
        }
    }
    return 0;
}