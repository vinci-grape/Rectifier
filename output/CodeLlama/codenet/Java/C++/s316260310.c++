#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 1000006

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int N;
        long K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        vector<int> straight, cycle;
        vector<bool> vis(N, false);
        int curr = 0;
        while (!vis[curr]) {
            vis[curr] = true;
            curr = A[curr] - 1;
        }

        int st = 0;
        while (st != curr) {
            straight.push_back(st);
            st = A[st] - 1;
        }

        cycle.push_back(curr);
        curr = A[curr] - 1;
        while (curr != cycle.back()) {
            cycle.push_back(curr);
            curr = A[curr] - 1;
        }

        //cout << straight << endl;
        //cout << cycle << endl;

        if (K < straight.size()) {
            cout << straight[K] + 1 << endl;
        } else {
            K -= straight.size();
            cout << cycle[K % cycle.size()] + 1 << endl;
        }
    }

    return 0;
}