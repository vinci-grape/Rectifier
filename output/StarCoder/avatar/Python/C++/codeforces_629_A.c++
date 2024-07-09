#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, chocCount = 0, nfat = 1, happiness = 0;
    cin >> n;
    string cake[n];
    for (i = 0; i < n; i++)
    {
        cin >> cake[i];
        for (j = 0; j < cake[i].length(); j++)
        {
            if (cake[i][j] == 'C')
                chocCount++;
        }
        if (chocCount > 1)
        {
            for (i = chocCount; i > chocCount - 2; i--)
            {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        chocCount = 0;
        nfat = 1;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (cake[i][j] == 'C')
                chocCount++;
        }
        if (chocCount > 1)
        {
            for (i = chocCount; i > chocCount - 2; i--)
            {
                nfat *= i;
            }
            happiness += nfat / 2;
        }
        chocCount = 0;
        nfat = 1;
    }
    cout << happiness;
    return 0;
}