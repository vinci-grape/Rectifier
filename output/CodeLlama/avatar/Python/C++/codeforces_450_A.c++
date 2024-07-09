#include <iostream>
using namespace std;
int main()
{
    int n, m, i, ind = 0, mx = 0;
    cin >> n >> m;
    int l[n];
    for (i = 0; i < n; i++)
        cin >> l[i];
    int l2[n];
    for (i = 0; i < n; i++)
    {
        if (l[i] % m == 0)
            l2[i] = l[i] / m;
        else
            l2[i] = l[i] / m + 1;
    }
    for (i = 0; i < n; i++)
    {
        if (l2[i] > mx)
        {
            mx = l2[i];
            ind = i;
        }
    }
    cout << ind + 1;
    return 0;
}