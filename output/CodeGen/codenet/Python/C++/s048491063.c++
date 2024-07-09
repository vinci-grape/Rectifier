#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxForm(vector<vector<int> > &train, int N, int M, int Q) {
        int accu[N+1][N+1];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] = 0;
            }
        }
        for (int i = 0; i < M; ++i) {
            int l, r;
            cin >> l >> r;
            accu[l-1][r-1] += 1;
        }
        for (int i = 0; i < N; ++i) {
            vector<int> temp(N, 0);
            for (int j = 0; j < N; ++j) {
                temp[j] = accu[i][j];
            }
            accu[i] = temp;
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i+1][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] += accu[i][j+1];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                accu[i][j] +=