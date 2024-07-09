#include <iostream>
#include <vector>

using namespace std;

int res = 0;

void rec(int N, int M, int Q, vector<int>& A, vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
    if (A.size() == N) {
        int ans = 0;
        for (int i = 0; i < Q; i++) {
            if (A[b[i] - 1] - A[a[i] - 1] == c[i]) {
                ans += d[i];
            }
        }
        res = max(res, ans);
        return;
    }
    int last_max = A.empty() ? 1 : A.back();
    for (int i = last_max; i <= M; i++) {
        A.push_back(i);
        rec(N, M, Q, A, a, b, c, d);
        A.pop_back();
    }
}

void solve(int N, int M, int Q, vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
    res = 0;
    vector<int> A;
    rec(N, M, Q, A, a, b, c, d);
    cout << res << endl;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> a(Q), b(Q), c(Q), d(Q);
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    solve(N, M, Q, a, b, c, d);
    return 0;
}