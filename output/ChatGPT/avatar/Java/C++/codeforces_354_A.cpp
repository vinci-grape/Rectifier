#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, L, R, QL, QR;
    cin >> N >> L >> R >> QL >> QR;
    
    vector<int> W(N);
    vector<int> sum(N + 1);
    for(int n = 0; n < N; n++) {
        cin >> W[n];
        sum[n + 1] = sum[n] + W[n];
    }
    
    long long min = LLONG_MAX;
    for(int firstR = 0; firstR <= N; firstR++) {
        int lCount = firstR;
        int rCount = N - lCount;
        long long cand = sum[lCount] * L + (sum[N] - sum[lCount]) * R;
        int llCount = max(0, lCount - rCount - 1);
        int rrCount = max(0, rCount - lCount - 1);
        cand += llCount * QL;
        cand += rrCount * QR;
        min = min(cand, min);
    }
    
    cout << min << endl;

    return 0;
}