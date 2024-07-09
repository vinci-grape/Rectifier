#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> dp(n + 2);
    dp[n + 1] = 0;
    dp[n] = 1;
    for (int i = 0; i < m; i++) {
        int num;
        std::cin >> num;
        dp[num] = -1;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i] == -1)
            dp[i] = 0;
        else
            dp[i] = (dp[i + 1] + dp[i + 2]) % 1000000007;
    }
    std::cout << dp[0] << std::endl;

    return 0;
}