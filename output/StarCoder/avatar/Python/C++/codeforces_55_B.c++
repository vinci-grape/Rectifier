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
    int ans = 10000000000000000000000000;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i]!= -1 && a[j]!= -1)
            {
                int s = a[i];
                a[i] = -1;
                int t = a[j];
                if (s == '+' && t == '*')
                {
                    a[j] = -1;
                }
                else if (s == '*' && t == '+')
                {
                    a[j] = -1;
                }
                else if (s == '+' && t == '+')
                {
                    a[j] = s + t;
                }
                else if (s == '*' && t == '*')
                {
                    a[j] = s * t;
                }
                if (i == 2 && a[j] < ans)
                {
                    ans = a[j];
                }
            }
        }
    }
    cout << ans;
}