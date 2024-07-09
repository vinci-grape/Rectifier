#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int logsLength[n];
    for (int i = 0; i < n; i++) {
        cin >> logsLength[i];
    }
    int min = 1, max = 1e9 + 1000;
    while (min < max) {
        int mid = (min + max) / 2;
        if (nei(mid, logsLength, k)) {
            max = mid;
        } else {
            min = mid + 1;
        }
    }
    cout << min << "\n";
}

bool nei(int mid, int logsLength[], int k) {
    for (int i = 0; i < n; i++) {
        k -= (logsLength[i] + mid - 1) / mid - 1;
        if (k < 0) {
            return false;
        }
    }
    return true;
}