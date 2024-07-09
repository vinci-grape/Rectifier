#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int dist[N];
    dist[0] = A[0];
    for (int i = 1; i < N; ++i) {
        dist[i] = A[i] - A[i-1];
    }
    dist[N-1] = K + A[N-1] - A[0];

    int maxv = *max_element(dist, dist+N);
    cout << accumulate(dist, dist+N, 0) - maxv << endl;

    return 0;
}