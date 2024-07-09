#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
const int MAX = INT_MAX;
const long LMAX = LONG_MAX;
int len = (int)1e6 + 1;
void doIt() {
    int N;
    long K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;
    }
    set<int> used;
    int idx[N];
    int pos[N];
    int next = 0, cur = 0;
    while (!used.count(next)) {
        used.insert(next);
        idx[next] = cur;
        pos[cur] = next;
        next = A[next];
        cur++;
    }
    long a = (long)cur - idx[next];
    long b = (long)idx[next];
    int ans = (int)((10000 * a + K - b) % a + b);
    if (b > K)
        ans = (int)K;
    cout << pos[ans] + 1 << endl;
}
int main() {
    doIt();
    return 0;
}