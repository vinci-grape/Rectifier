#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> lista;
    for ( int i = 0; i < n; ++i ) {
        int x;
        cin >> x;
        lista.push_back(x);
    }
    sort(lista.begin(), lista.end());
    for ( int i = 0; i < n; ++i ) {
        if ( i == 0 ) {
            cout << lista[i+1] - lista[i] << " " << lista[n-1] - lista[i] << endl;
            continue;
        }
        if ( i == n - 1 ) {
            cout << lista[n-1] - lista[n-2] << " " << lista[n-1] - lista[0] << endl;
            continue;
        }
        if ( lista[i] - lista[i-1] > lista[i+1] - lista[i] ) {
            cout << lista[i+1] - lista[i] << endl;
        } else {
            cout << lista[i] - lista[i-1] << endl;
        }
        if ( lista[n-1] - lista[i] > lista[i] - lista[0] ) {
            cout << lista[n-1] - lista[i] << endl;
        } else {
            cout << lista[i] - lista[0] << endl;
        }
    }
    return 0;
}