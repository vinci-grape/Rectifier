#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> ope(m);
    for (int i = 0; i < m; i++)
    {
        cin >> ope[i][0] >> ope[i][1];
    }
    sort(a.begin(), a.end());
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
                    break;
            }
        }
        else
            break;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
    return 0;
}