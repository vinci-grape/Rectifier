#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int left = INT_MAX, right = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
        left = min(left, a[i]);
        right = max(right, b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (left == a[i] && right == b[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}