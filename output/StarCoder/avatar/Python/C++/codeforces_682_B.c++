#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l, l + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] > c)
        {
            c++;
        }
    }
    cout << c + 1;
    return 0;
}