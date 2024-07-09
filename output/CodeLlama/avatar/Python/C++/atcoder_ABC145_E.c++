#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N, T;
    cin >> N >> T;
    int time_value[N + 1][2];
    for (int i = 1; i <= N; i++)
    {
        cin >> time_value[i][0] >> time_value[i][1];
    }
    sort(time_value + 1, time_value + N + 1, [](int a[], int b[]) { return a[1] > b[1]; });
    int dp[N + 1][T + 1];
    for (int t = 0; t <= T; t++)
    {
        dp[0][t] = 0;
    }
    for (int n = 1; n <= N; n++)
    {
        dp[n][0] = 0;
        for (int t = 1; t <= T; t++)
        {
            if (time_value[n][0] > t)
            {
                dp[n][t] = dp[n - 1][t];
            }
            else
            {
                dp[n][t] = max(dp[n - 1][t], time_value[n][1] + dp[n - 1][t - time_value[n][0]]);
            }
        }
    }
    int val_acum = time_value[N][1];
    int t = T - 1;
    int max_val = val_acum + dp[N - 1][t];
    for (int n = N - 1; n >= 1; n--)
    {
        val_acum += time_value[n][1];
        t -= time_value[n + 1][0];
        if (t < 0)
        {
            break;
        }
        else
        {
            max_val = max(max_val, val_acum + dp[n - 1][t]);
        }
    }
    cout << max_val << endl;
    return 0;
}