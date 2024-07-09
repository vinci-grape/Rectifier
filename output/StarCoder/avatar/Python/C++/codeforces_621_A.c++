#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            odd++;
        }
    }
    int sum = 0;
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            sum += v[i];
        }
        else
        {
            if (ok || odd > 1)
            {
                sum += v[i];
                odd--;
                ok =!ok;
            }
        }
    }
    cout << sum;
    return 0;
}