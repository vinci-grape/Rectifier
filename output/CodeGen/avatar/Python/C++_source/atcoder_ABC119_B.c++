#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int N;
    double x[ N ];
    cin >> N;
    for ( int i = 0; i < N; ++i ) {
        cin >> x[ i ];
    }
    double sum = 0;
    for ( int i = 0; i < N; ++i ) {
        sum += x[ i ];
    }
    cout << sum << endl;
    return 0;
}