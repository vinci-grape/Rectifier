#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    long ans[n];
    deque<long> q;
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
            ans[i] = (q.empty() ? t : q.back()) + d;
            q.push_back(ans[i]);
        }
        else
        {
            ans[i] = -1;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
}