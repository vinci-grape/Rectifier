#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y = 0, t = 0, n;
    cin >> n;
    string str;
    cin >> str;
    char l[n];
    l = str.toCharArray();
    for (int i = 0; i < n; i++)
    {
        if (l[i]!= '4' && l[i]!= '7')
        {
            t = 1;
        }
    }
    if (t == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            x = x + (int)(l[i] - '0');
        }
        for (int i = n - 1; i > (n / 2) - 1; i--)
        {
            y = y + (int)(l[i] - '0');
        }
        if (x == y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}