#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    Solution() {
        string line;
        while (getline(cin, line)) {
            run_case(line);
        }
    }

    void run_case(string line) {
        int N = stoi(line.substr(0, line.find(' ')));
        int K = stoi(line.substr(line.find(' ') + 1));

        int len = 0;
        while (N > 0) {
            N /= K;
            len++;
        }

        cout << len << endl;
        return;
    }
};

class LCS {
    vector<vector<int>> dp;
public:
    int lcs(string A, string B) {
        int sz_a = A.length(), sz_b = B.length();
        dp.resize(sz_a + 1, vector<int>(sz_b + 1, 0));

        for (int i = 0; i <= sz_a; i++) dp[i][0] = 0;
        for (int j = 0; j <= sz_b; j++) dp[0][j] = 0;

        for (int i = 1; i <= sz_a; i++) {
            for (int j = 1; j <= sz_b; j++) {
                if (A[i - 1] == B[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[sz_a][sz_b];
    }

    string getLCS(string X, string Y) {
        int m = X.length();
        int n = Y.length();
        int index = dp[m][n];
        int temp = index;

        // Create a character array to store the lcs string
        vector<char> lcs(index + 1);
        lcs[index] = '\0'; // Set the terminating character

        int i = m;
        int j = n;
        while (i > 0 && j > 0) {
            if (X[i - 1] == Y[j - 1]) {
                lcs[index - 1] = X[i - 1];
                i--;
                j--;
                index--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }

        return string(lcs.begin(), lcs.begin() + temp + 1);
    }
};

int main() {
    Solution solution;
    return 0;
}