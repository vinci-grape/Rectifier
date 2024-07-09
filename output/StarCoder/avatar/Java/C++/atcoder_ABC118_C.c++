#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    if (a[n - 1] == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    while (true)
    {
        if (a.size() == 1)
        {
            ans = a[0];
            break;
        }
        a = func(a);
    }
    cout << ans << endl;
    return 0;
}

vector<int> func(vector<int> a)
{
    int min = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            a.erase(a.begin() + i);
            i--;
        }
        else
        {
            if (min!= 0)
            {
                a[i] %= min;
                if (a[i] == 1)
                {
                    cout << 1 << endl;
                    return a;
                }
            }
            else
            {
                min = a[i];
            }
        }
    }
    sort(a.begin(), a.end());
    return a;
}