#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << v[i + 1] - v[i] << " " << v[n - 1] - v[i] << endl;
            continue;
        }
        if (i == n - 1)
        {
            cout << v[n - 1] - v[n - 2] << " " << v[n - 1] - v[0] << endl;
            continue;
        }
        if (v[i + 1] - v[i] > v[i] - v[i - 1])
        {
            cout << v[i + 1] - v[i] << " ";
        }
        else
        {
            cout << v[i] - v[i - 1] << " ";
        }
        if (v[n - 1] - v[i] > v[i] - v[0])
        {
            cout << v[n - 1] - v[i] << endl;
        }
        else
        {
            cout << v[i] - v[0] << endl;
        }
    }
    return 0;
}