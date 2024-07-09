#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
using namespace std;

const int INF = 2147483647;
const int MOD = 1000000007;

int main() {
    int N, W;
    scanf("%d %d", &N, &W);
    
    // 品物i
    int v[N+1], w[N+1];
    
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &v[i], &w[i]);
    }
    
    int sumV[N+1][W+1];
    
    for (int i = 1; i <= N; i++) {
        for (int i_sum = 0; i_sum < w[i]; i_sum++) {
            sumV[i][i_sum] = sumV[i-1][i_sum];
        }
        
        for (int i_sum = w[i]; i_sum <= W; i_sum++) {
            sumV[i][i_sum] = max(sumV[i-1][i_sum], sumV[i-1][i_sum-w[i]] + v[i]);
        }
    }
    
    printf("%d\n", sumV[N][W]);
    return 0;
}