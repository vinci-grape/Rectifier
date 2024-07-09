#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        if (a == 0) return b;
        return gcd(b % a, a);
    }
    int findMinStep(string board, string hand) {
        int m = board.size();
        int n = hand.size();
        vector<vector<int> > dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == hand[j]) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = INF;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = INF;
                    }
                } else {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i][j] = 2;
                    } else if (j < n - 2 && board[i] == hand[j + 2]) {
                        dp[i][j] = 3;
                    } else {
                        dp[i][j] = INF;
                    }
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i] == 'A') {
                    dp[i][j] = 0;
                } else if (board[i] == 'B') {
                    if (j < n - 1 && board[i] == hand[j + 1]) {
                        dp[i