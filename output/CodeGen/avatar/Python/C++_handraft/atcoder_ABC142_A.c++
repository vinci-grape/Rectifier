#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int t = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( i + 1 & 1 ) {
            t += 1;
        }
    }
    cout << t / n << endl;
    return 0;
}