#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(vector<int>& arr) {
    int n = arr.size();
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    long long total = (long long)n * (n + 1) / 2;
    int l = 0, r = n - 1;
    while (l < r) {
        int mid = l + (r - l) / 2;
        int target = sorted[mid];
        int cur = 0;
        long long cnt = 0;
        vector<long long> bit(2 * n + 2);
        for (int x = n + 1; x < bit.size(); x += x & -x)
            bit[x]++;
        for (int i = 0; i < n; i++) {
            cur += arr[i] <= target ? 1 : -1;
            for (int x = cur + n + 1; x < bit.size(); x += x & -x)
                bit[x]++;
            for (int x = cur + n; x > 0; x -= x & -x)
                cnt += bit[x];
        }
        if (cnt >= total / 2 + 1)
            r = mid;
        else
            l = mid + 1;
    }
    return sorted[l];
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << solve(arr) << endl;
    return 0;
}