#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    
    int v[N+1], w[N+1];
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i] >> w[i];
    }
    
    int sumV[N+1][W+1];
    for (int i = 1; i <= N; i++)
    {
        for (int i_sum = 0; i_sum <= W; i_sum++)
        {
            if (i_sum < w[i])
                sumV[i][i_sum] = sumV[i-1][i_sum];
            else
                sumV[i][i_sum] = max(sumV[i-1][i_sum], sumV[i-1][i_sum-w[i]] + v[i]);
        }
    }
    
    cout << sumV[N][W] << endl;
    
    return 0;
}