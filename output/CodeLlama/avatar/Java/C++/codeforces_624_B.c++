#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    sort(ans, ans + n);
    long long count = ans[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (ans[i] < ans[i + 1])
        {
            count += ans[i];
        }
        else
        {
            while (ans[i] >= ans[i + 1])
            {
                ans[i]--;
            }
            if (ans[i] > 0)
            {
                count += ans[i];
            }
        }
    }
    cout << count << endl;
}