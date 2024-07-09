#include <iostream>
using namespace std;
int main()
{
    int n, m, q, r;
    cin >> n >> m;
    q = n / m;
    r = n % m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = q;
    }
    for (int i = 0; i < r; i++)
    {
        a[i]++;
    }
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}