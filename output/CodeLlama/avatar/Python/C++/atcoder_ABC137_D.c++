#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    priority_queue<int> x;
    priority_queue<int> y;
    for (int i = 0; i < n; i++)
    {
        int day, salary;
        cin >> day >> salary;
        x.push(-day);
        x.push(-salary);
    }
    while (x.size() > 0)
    {
        int d = -x.top();
        x.pop();
        int s = -x.top();
        x.pop();
        int r = m - y.size();
        if (r >= -d)
        {
            y.push(-s);
        }
        else
        {
            y.push(-s);
            y.pop();
        }
    }
    int sum = 0;
    while (y.size() > 0)
    {
        sum += y.top();
        y.pop();
    }
    cout << sum;
    return 0;
}