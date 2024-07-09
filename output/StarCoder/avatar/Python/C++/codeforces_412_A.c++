#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string v;
    cin >> v;
    string d[] = {"LEFT", "RIGHT"};
    bool f = k - 1 < n - k;
    int m = min(k - 1, n - k);
    vector<string> a;
    for (int i = 0; i < m; i++)
        a.push_back(d[not f]);
    for (int i = v.length() - 1; i >= 0; i -= 2 * f)
        a.push_back("PRINT " + v[i]);
    a.push_back(d[f]);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    return 0;
}