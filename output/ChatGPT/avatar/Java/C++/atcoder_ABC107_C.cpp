#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int temp = 0;
    int ans = 1000000000;
    
    if (K == 1) {
        for (int i = 0; i < N; i++) {
            temp = S[i];
            ans = min(abs(temp), ans);
        }
        cout << ans << endl;
    } else if (N - K != 0) {
        for (int i = 0; i <= N - K; i++) {
            int minVal = S[i];
            int maxVal = S[i + K - 1];
            if (minVal < 0 && maxVal > 0) {
                temp = min(2 * (-minVal) + maxVal, (-minVal) + 2 * maxVal);
            } else {
                temp = max(abs(minVal), abs(maxVal));
            }
            ans = min(ans, temp);
        }
        cout << ans << endl;
    } else {
        int minVal = S[0];
        int maxVal = S[N - 1];
        if (minVal < 0 && maxVal > 0) {
            cout << min(2 * (-minVal) + maxVal, (-minVal) + 2 * maxVal) << endl;
        } else {
            cout << max(abs(minVal), abs(maxVal)) << endl;
        }
    }

    return 0;
}