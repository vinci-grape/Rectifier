#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int s = 0;
    for (int i = 0; i < 4 * m; i++)
    {
        s += a[i];
    }
    s = s / (4 * m);
    if (a[m - 1] >= s)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}