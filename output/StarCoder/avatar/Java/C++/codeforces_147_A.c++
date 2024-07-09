#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string ans = s[0];
    for (int i = 1; i < n; i++)
    {
        if (isalpha(s[i]))
        {
            if (!isalpha(s[i - 1]))
                ans +='';
            ans += s[i];
        }
        else if (ispunct(s[i]))
            ans += s[i];
    }
    cout << ans << endl;
    return 0;
}