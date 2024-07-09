#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
        cin >> w[i];
    int x = 0;
    for (int i = 0; i < n; i++)
        x += w[i];
    vector<int> d;
    for (int i = 0; i < n; i++)
        if ((x - w[i]) / (n - 1) == w[i])
            d.push_back(i + 1);
    cout << d.size() << endl;
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << " ";
    return 0;
}