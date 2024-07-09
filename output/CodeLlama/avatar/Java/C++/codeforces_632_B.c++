#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    long sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            sum += a[i];
        }
    }
    long ans = sum;
    long sum1 = sum;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            sum1 += a[i];
        }
        else
        {
            sum1 -= a[i];
        }
        ans = max(ans, sum1);
    }
    sum1 = sum;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
        {
            sum1 += a[i];
        }
        else
        {
            sum1 -= a[i];
        }
        ans = max(ans, sum1);
    }
    cout << ans << endl;
}