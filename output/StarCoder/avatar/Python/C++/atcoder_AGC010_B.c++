#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (sum(a) % (n * (n + 1) / 2))
    {
        cout << "NO" << endl;
        return 0;
    }
    int k = sum(a) / (n * (n + 1) / 2);
    a[n] = a[0];
    if (sum(a, n + 1, k) || sum(a, n + 1, k, n))
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}