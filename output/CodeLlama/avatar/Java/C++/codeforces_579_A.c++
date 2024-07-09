#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        int x = n % 2;
        n /= 2;
        s += x + "";
    }
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            ans++;
        }
    }
    cout << ans << endl;
}