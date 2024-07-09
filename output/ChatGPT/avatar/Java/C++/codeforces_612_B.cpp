#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int dp[200001] = {0};
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        dp[num] = i;
    }
    
    long long ans = 0;
    for (int i = 2; i <= n; i++) {
        ans += abs(dp[i] - dp[i-1]);
    }
    
    cout << ans << endl;
    
    return 0;
}