#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <complex>
#include <functional>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cassert>
#include <bitset>
using namespace std;

using ull = unsigned long long;
using ullll = unsigned __int128;
using uint = unsigned int;
using uint64 = unsigned long long;
using uint128 = unsigned __int128;

#define DEBUG

#ifdef DEBUG
#define MAX_N 1000000
#else
#define MAX_N 100000
#endif

void solve ( ) {
    int N;
    cin >> N;
    vector <int> A ( N );
    for ( int i = 0; i < N; ++i ) {
        cin >> A[i];
    }
    ull result = 0;
    for ( int b = 0; b < 60; ++b ) {
        int bs = ( ( A[0] >> b ) & 1 );
        result = ( result + bs * ( N - bs ) * ( 1 << b ) ) % 1000000007;
    }
    cout << result << endl;
}

int main ( ) {
    clock_t t = clock ( );
    solve ( );
    t = clock ( ) - t;
    printf ( "Time elapsed: %.6f\n", static_cast<double> ( t ) / CLOCKS_PER_SEC );
    return 0;
}