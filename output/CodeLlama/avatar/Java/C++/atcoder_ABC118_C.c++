#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    if (n == 1)
    {
        int x;
        cin >> x;
        cout << x;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    if (a[a.size() - 1] == 0)
    {
        cout << 0;
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
    cout << ans;
    return 0;
}
vector<int> func(vector<int> A)
{
    vector<int> a = A;
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
            if (min != 0)
            {
                a[i] = a[i] % min;
                if (a[i] == 1)
                {
                    cout << 1;
                    return 0;
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