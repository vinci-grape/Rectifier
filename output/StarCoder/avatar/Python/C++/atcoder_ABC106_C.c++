#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int k;
    cin >> k;
    int l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!= '1')
            break;
        l++;
    }
    if (l >= k)
        return 1;
    return s[l];
}