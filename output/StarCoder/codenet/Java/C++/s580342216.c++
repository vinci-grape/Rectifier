#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <vector>
#include <utility>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#define LL long long
#define INF 0x3f3f3f3f
using namespace std;

class Solution {
public:
    int main(int argc, char *argv[]) {
        Solution solution;
        return 0;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    return 0;
}

class LCS {
public:
    int lcs(string A, string B) {
        int sz_a = A.length(), sz_b = B.length();
        int dp[sz_a+1][sz_b+1];

        for (int i=0; i<=sz_a; i++) dp[i][0] = 0;
        for (int j=0; j<=sz_b; j++) dp[0][j] = 0;

        for (int i=1; i<=sz_a; i++) {
            for (int j=1; j<=sz_b; j++) {
                if (A[i-1] == B[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[sz_a][sz_b];
    }

    string getLCS(string X, string Y) {
        int m = X.length();
        int n = Y.length();
        // Following code is used to print LCS
        int index = dp[m][n];
        int temp = index;

        // Create a character array to store the lcs string
        char lcs[index+1];
        lcs[index] = '\0'; // Set the terminating character

        // Start from the right-most-bottom-most corner and
        // one by one store characters in lcs[]
        int i = m;
        int j = n;
        while (i > 0 && j > 0) {
            // If current character in X[] and Y are same, then
            // current character is part of LCS
            if (X[i-1] == Y[j-1])
            {
                // Put current character in result
                lcs[index-1] = X[i-1];

                // reduce values of i, j and index
                i--;
                j--;
                index--;
            }

            // If not same, then find the larger of two and
            // go in the direction of larger value
            else if (dp[i-1][j] > dp[i][j-1])
                i--;
            else
                j--;
        }

        // // Print the lcs
        // printf("LCS of %s and %s is ", X.c_str(), Y.c_str());
        // for(int k=0;k<=temp;k++)
        //     printf("%c", lcs[k]);
        // printf("\n");

        return string(lcs).substr(0, temp+2);
    }
};

int main(int argc, char *argv[]) {
    LCS lcs;
    string A = "abcde";
    string B = "ace";
    printf("%d\n", lcs.lcs(A, B));
    printf("%s\n", lcs.getLCS(A, B).c_str());
    return 0;
}

class Solution {
public:
    int main(int argc, char *argv[]) {
        Solution solution;
        return 0;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    return 0;
}

class LCS {
public:
    int lcs(string A, string B) {
        int sz_a = A.length(), sz_b = B.length();
        int dp[sz_a+1][sz_b+1];

        for (int i=0; i<=sz_a; i++) dp[i][0] = 0;
        for (int j=0; j<=sz_b; j++) dp[0][j] = 0;

        for (int i=1; i<=sz_a; i++) {
            for (int j=1; j<=sz_b; j++) {
                if (A[i-1] == B[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[sz_a][sz_b];
    }

    string getL