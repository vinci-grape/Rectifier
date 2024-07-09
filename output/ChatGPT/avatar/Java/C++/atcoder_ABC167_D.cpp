#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void doIt() {
    int N;
    long long K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A[i]--;
    }

    unordered_set<int> used;
    vector<int> idx(N);
    vector<int> pos(N);
    int next = 0, cur = 0;

    while (!used.count(next)) {
        used.insert(next);
        idx[next] = cur;
        pos[cur] = next;
        next = A[next];
        cur++;
    }

    long long a = cur - idx[next];
    long long b = idx[next];
    int ans = (10000 * a + K - b) % a + b;

    if (b > K) {
        ans = K;
    }

    cout << pos[ans] + 1 << endl;
}

int main() {
    doIt();
}