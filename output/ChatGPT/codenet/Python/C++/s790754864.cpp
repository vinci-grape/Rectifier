#include <iostream>
using namespace std;

const int mod = 1000000007;

int fact(int n, int r) {
    int result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    int R = N - K;
    
    for (int i = 1; i <= K; i++) {
        int ans;
        if (N - K + 1 < i) {
            ans = 0;
        } else {
            ans = fact(R + 1, i) * fact(K - 1, i - 1);
        }
        cout << ans % mod << endl;
    }
    
    return 0;
}