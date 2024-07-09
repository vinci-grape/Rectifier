#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    int a;
    int b;
    cin >> n >> a >> b;
    vector<int> lista(a);
    vector<int> listb(b);
    for ( int k = 0; k < n; k++ ) {
        cin >> lista[k];
    }
    for ( int k = 0; k < n; k++ ) {
        cin >> listb[k];
    }
    for ( int k = 0; k < n; k++ ) {
        if ( find(lista.begin(), lista.end(), k + 1) != lista.end() ) {
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }
    return 0;
}