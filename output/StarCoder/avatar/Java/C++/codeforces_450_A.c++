#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q1, q2;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
        q2.push(i);
    }
    int ans = 0;
    while (!q1.empty())
    {
        if (q1.front() <= m)
        {
            q1.pop();
            ans = q2.front();
            q2.pop();
        }
        else if (q1.front() > m)
        {
            int x = q1.front();
            q1.pop();
            int val = x - m;
            q1.push(val);
            int val2 = q2.front();
            q2.pop();
            q2.push(val2);
        }
    }
    cout << ans << endl;
    return 0;
}