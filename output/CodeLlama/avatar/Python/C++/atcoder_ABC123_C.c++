#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int N;
    cin >> N;
    vector < int > A ( 5 );
    for ( int i = 0; i < 5; i++ ) cin >> A[i];
    cout << ceil ( N / min ( A ) ) + 4 << endl;
    return 0;
}