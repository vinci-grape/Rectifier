#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int mod = 1000000007;
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    int rep = N / ( A + B );
    ans += rep * A;
    int res = N - rep * ( A + B );
    ans += min ( res, A );
    cout << ans << endl;
    return 0;
}