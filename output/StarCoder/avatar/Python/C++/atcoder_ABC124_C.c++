#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int even = 0, odd = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            even += (s[i] == '0');
        else
            odd += (s[i] == '1');
    }
    cout << min(s.length() - (even + odd), s.length() - (odd + even)) << endl;
    return 0;
}