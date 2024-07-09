#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<vector<int>> problems(q, vector<int>(2));
    for (int i = 0; i < q; i++)
    {
        cin >> problems[i][0] >> problems[i][1];
    }
    vector<int> cumsum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + (s[i - 1] == 'A' && s[i] == 'C');
    }
    for (auto &problem : problems)
    {
        cout << cumsum[problem[1] - 1] - cumsum[problem[0] - 1] << endl;
    }
    return 0;
}