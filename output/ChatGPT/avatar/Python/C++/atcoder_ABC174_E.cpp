#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& lis, int k, int mid) {
    for (int i : lis) {
        if (i % mid == 0) {
            k += 1;
        }
        k -= (i / mid);
    }
    return k >= 0;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> lis(n);
    for (int i = 0; i < n; i++) {
        cin >> lis[i];
    }
    int a = 1, b = *max_element(lis.begin(), lis.end());
    int ans = b;
    while (a <= b) {
        int mid = (a + b) / 2;
        if (check(lis, k, mid)) {
            ans = mid;
            b = mid - 1;
        }
        else {
            a = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}