#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int round_complexity[n], george_complexity[m];
    for (int i = 0; i < n; i++)
        cin >> round_complexity[i];
    for (int i = 0; i < m; i++)
        cin >> george_complexity[i];
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        i += 1 * (round_complexity[i] <= george_complexity[j]);
        j += 1;
    }
    cout << n - i;
    return 0;
}