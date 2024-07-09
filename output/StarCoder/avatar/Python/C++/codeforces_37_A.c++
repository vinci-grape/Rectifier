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
    int high = 1;
    int tower = n;
    int maximum = 1;
    sort(l.begin(), l.end());
    for (int i = 1; i < n; i++)
    {
        if (l[i] == l[i - 1])
        {
            tower--;
            high++;
        }
        else
        {
            if (high > maximum)
            {
                maximum = high;
            }
            high = 1;
        }
    }
    if (high > maximum)
    {
        maximum = high;
    }
    cout << maximum << " " << tower;
    return 0;
}