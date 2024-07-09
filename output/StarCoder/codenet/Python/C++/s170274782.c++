#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            int x;
            cin >> x;
            A[i].push_back(x);
        }
    }

    vector<int> ans;
    int count = 0;
    for (int i = 0; i < N; i++) {
        count = 0;
        count = count + accumulate(A[0].begin(), A[0].begin() + i + 1, 0) + accumulate(A[1].begin() + i, A[1].end(), 0);
        ans.push_back(count);
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
}