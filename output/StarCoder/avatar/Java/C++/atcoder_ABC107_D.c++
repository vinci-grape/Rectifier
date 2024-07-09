#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        int target = sorted[mid];
        int cur = 0;
        long cnt = 0;
        long bit[2 * n + 2];
        for (int x = n + 1; x < bit.length; x += x & -x) bit[x]++;
        for (int i = 0; i < n; i++) {
            cur += arr[i] <= target? 1 : -1;
            for (int x = cur + n + 1; x < bit.length; x += x & -x) bit[x]++;
            for (int x = cur + n; x > 0; x -= x & -x) cnt += bit[x];
        }
        if (cnt >= total / 2 + 1) r = mid;
        else l = mid + 1;
    }
    return sorted[l];
}