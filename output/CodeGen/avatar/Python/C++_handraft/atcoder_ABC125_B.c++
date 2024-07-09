#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    vector<int> V(N);
    for ( int i = 0; i < N; ++i ) {
        cin >> V[i];
    }
    vector<int> C(N);
    for ( int i = 0; i < N; ++i ) {
        cin >> C[i];
    }
    int ans = 0;
    for ( int i = 0; i < N; ++i ) {
        if ( V[i] - C[i] > 0 ) {
            ans += V[i] - C[i];
        }
    }
    cout << ans << endl;
    return 0;
}