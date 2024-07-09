#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<vector<int>> ope(m, vector<int>(2));
    for (int i = 0; i < m; i++)
    {
        cin >> ope[i][0] >> ope[i][1];
    }
    sort(ope.begin(), ope.end(), [](vector<int> &a, vector<int> &b) {
        return a[1] > b[1];
    });
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < ope[j][1])
        {
            a[i] = ope[j][1];
            ope[j][0]--;
            if (ope[j][0] == 0)
            {
                j++;
                if (j == m)
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    cout << accumulate(a.begin(), a.end(), 0);
    return 0;
}