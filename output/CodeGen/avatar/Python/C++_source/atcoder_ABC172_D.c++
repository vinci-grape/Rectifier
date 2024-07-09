#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    int ans = 0;
    for ( int i = 1 ; i <= N ; ++i ) {
        ans += i * ( N / i ) * ( N / i + 1 ) / 2;
    }
    cout << ans << endl;
    return 0;
}