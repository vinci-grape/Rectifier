#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    vector<int> v1;
    for (int i = 1; i <= n; i++)
        v1.push_back(i);
    if (x == 1 || x == n * 2 - 1)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    if (x == n * 2 - 2)
    {
        for (int i = n - 1; i <= x + 2; i++)
            cout << i << " ";
        for (int i = 1; i <= n - 1; i++)
            cout << i << " ";
    }
    else
    {
        for (int i = 1; i <= x - 1; i++)
            cout << i << " ";
        cout << x + 2 << " " << x - 1 << " " << x << " " << x + 1 << " ";
        for (int i = x + 3; i <= n * 2; i++)
            cout << i << " ";
    }
    return 0;
}