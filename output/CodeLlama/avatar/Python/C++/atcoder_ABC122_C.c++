#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<vector<int>> problems(q);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        problems[i] = {l, r};
    }
    vector<int> cumsum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + (s[i - 1] == 'A' && s[i] == 'C');
    }
    for (int i = 0; i < q; i++)
    {
        int l = problems[i][0], r = problems[i][1];
        cout << cumsum[r] - cumsum[l - 1] << endl;
    }
    return 0;
}