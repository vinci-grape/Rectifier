#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> l;
    for (int i = 0; i < n; i++)
    {
        if (l.find(a[i]) == l.end())
            l[a[i]] = 1;
        else
            l[a[i]]++;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[a[i]] > 1)
        {
            res += n - i - l[a[i]];
            l[a[i]]--;
        }
        else
        {
            res += n - i - 1;
        }
    }
    cout << res;
    return 0;
}