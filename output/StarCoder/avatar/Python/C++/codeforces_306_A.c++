#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int q = n / m;
    int r = n % m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = q;
    }
    for (int i = 0; i < r; i++)
    {
        a[i] += 1;
    }
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
}