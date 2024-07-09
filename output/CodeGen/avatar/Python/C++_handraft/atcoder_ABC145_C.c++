#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for ( int i = 0; i < N; ++i ) {
        cin >> x[i];
        cin >> y[i];
    }
    int result = 0;
    for ( int i = 0; i < N; ++i ) {
        int f = i;
        int t = i + 1;
        if ( t == N ) {
            t = 0;
        }
        int distance = sqrt(pow(x[t] - x[f], 2) + pow(y[t] - y[f], 2));
        result += distance;
    }
    cout << result / N << endl;
    return 0;
}