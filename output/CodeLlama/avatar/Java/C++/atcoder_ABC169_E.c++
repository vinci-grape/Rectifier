#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 998244353;
    int n;
    cin >> n;
    vector<int> ai;
    vector<int> bi;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ai.push_back(a);
        bi.push_back(b);
    }
    sort(ai.begin(), ai.end());
    sort(bi.begin(), bi.end());
    if (n % 2 == 1)
    {
        cout << bi[n / 2] - ai[n / 2] + 1 << endl;
    }
    else
    {
        double b = (ai[n / 2] + ai[n / 2 - 1]) / 2.0;
        double c = (bi[n / 2] + bi[n / 2 - 1]) / 2.0;
        cout << (int)(2 * (c - b) + 1) << endl;
    }
    return 0;
}