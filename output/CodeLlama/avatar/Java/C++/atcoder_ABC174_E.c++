#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> logsLength(n);
    for (int i = 0; i < n; ++i) {
        cin >> logsLength[i];
    }
    int min = 1, max = 1e9 + 1000;
    while (min < max) {
        int mid = (min + max) / 2;
        if (nei(mid, logsLength, k))
            max = mid;
        else
            min = mid + 1;
    }
    cout << min << endl;
}

bool nei(int mid, vector<int> &logsLength, int k) {
    for (int log : logsLength) {
        k -= (log + mid - 1) / mid - 1;
    }
    return k >= 0;
}