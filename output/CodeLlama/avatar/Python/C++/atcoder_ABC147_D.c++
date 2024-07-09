#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long A;
    cin >> A;
    long long result = 0;
    for (int b = 0; b < 60; b++) {
        long long bs = __builtin_popcountll(A >> b);
        result = (result + bs * (N - bs) * (1LL << b)) % 1000000007;
    }
    cout << result << endl;
    return 0;
}