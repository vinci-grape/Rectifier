#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(1000010, 0);
    vector<int> dp(1000010, 0);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        l[a] = b;
    }
    if (l[0] > 0) {
        dp[0] = 1;
    }
    int mx = 0;
    for (int i = 1; i < 1000010; i++) {
        if (l[i] == 0) {
            dp[i] = dp[i - 1];
        }
        else {
            if (l[i] >= i) {
                dp[i] = 1;
            }
            else {
                dp[i] = dp[i - l[i] - 1] + 1;
            }
        }
        if (dp[i] > mx) {
            mx = dp[i];
        }
    }
    cout << n - mx << endl;
}