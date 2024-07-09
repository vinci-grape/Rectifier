//--- pB ---//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int lcs(string A, string B) {
        int m = A.length();
        int n = B.length();
        int dp[m+1][n+1];
        for (int i = 0; i <= m; i++) dp[i][0] = 0;
        for (int j = 0; j <= n; j++) dp[0][j] = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (A[i-1] == B[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    string getLCS(string X, string Y) {
        int m = X.length();
        int n = Y.length();
        int dp[m+1][n+1];
        for (int i = 0; i <= m; i++) dp[i][0] = 0;
        for (int j = 0; j <= n; j++) dp[0][j] = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (X[i-1] == Y[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        int index = dp[m][n];
        int temp = index;
        string res = "";
        for (int i = m; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                if (X[i] == Y[j]) {
                    res += X[i];
                    i--;
                    j--;
                } else if (dp[i][j] == dp[i+1][j]) {
                    i--;
                } else if (dp[i][j] == dp[i][j+1]) {
                    j--;
                }
            }
        }
        return res.substr(0, temp);
    }
};

int main() {
    Solution s;
    cout << s.getLCS("abcd", "abcd") << endl;
    cout << s.getLCS("abcd", "ab") << endl;
    cout << s.getLCS("abcd", "bc") << endl;
    cout << s.getLCS("abcd", "abcd") << endl;
    return 0;
}