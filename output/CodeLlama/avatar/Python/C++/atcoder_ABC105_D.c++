#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> cum_remainders(N + 1, 0);
    for (int i = 0; i < N; i++) {
        cum_remainders[i + 1] = (cum_remainders[i] + A[i]) % M;
    }
    map<int, int> remainder_counts;
    for (int i = 0; i < N + 1; i++) {
        remainder_counts[cum_remainders[i]]++;
    }
    long long combinations = 0;
    for (auto it : remainder_counts) {
        combinations += it.second * (it.second - 1) / 2;
    }
    cout << combinations << endl;
    return 0;
}