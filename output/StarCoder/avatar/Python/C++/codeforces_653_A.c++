#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    for (int i = 0; i < n; i++)
    {
        if (l[i] + 1 && l[i] + 2)
        {
            cout << "YES";
            break;
        }
    }
    else
    {
        cout << "NO";
    }
}