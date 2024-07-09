#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, b, res = 0;
    string s;
    cin >> s >> k;
    n = s.length();
    for (int i = 0; i < k; i++)
    {
        cin >> s;
        a = 0, b = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[0] == s[j])
                a++;
            else if (s[1] == s[j])
                b++;
            else
            {
                res += min(a, b);
                a = b = 0;
            }
        }
        res += min(a, b);
    }
    cout << res;
    return 0;
}