#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> dp;
        dp.push_back(-1e9);
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            num = -num;
            if (num >= dp.back()) {
                dp.push_back(num);
            } else {
                int idx = upper_bound(dp.begin(), dp.end(), num) - dp.begin();
                dp[idx] = num;
            }
        }
        cout << dp.size() - 1 << endl;
    }
    return 0;
}