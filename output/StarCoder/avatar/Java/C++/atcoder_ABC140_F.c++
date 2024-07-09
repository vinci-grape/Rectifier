#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int size = (1 << N);
    int S[size];
    bool spawned[size];
    spawned[size - 1] = true;
    for (int i = 0; i < size; i++) cin >> S[i];
    sort(S, S + size);
    vector<int> active;
    active.push_back(S[size - 1]);
    spawned[size - 1] = true;
    for (int i = 0; i < N; i++) {
        sort(active.begin(), active.end(), greater<int>());
        vector<int> activated;
        int next = size - 1;
        for (int slime : active) {
            while (next >= 0 && (S[next] >= slime || spawned[next])) {
                next--;
            }
            if (next < 0) {
                cout << "No" << endl;
                return 0;
            }
            spawned[next] = true;
            activated.push_back(S[next]);
        }
        active.insert(active.end(), activated.begin(), activated.end());
    }
    cout << "Yes" << endl;
}