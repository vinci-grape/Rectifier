#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    long long ans[n];
    deque <long long> q;
    for (int i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;
        while (!q.empty() && q.front() <= t)
        {
            q.pop_front();
        }
        if (q.size() <= b)
        {
            if (q.empty())
            {
                ans[i] = t + d;
                q.push_back(ans[i]);
            }
            else
            {
                ans[i] = q.back() + d;
                q.push_back(ans[i]);
            }
        }
        else
        {
            ans[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}