#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int out[n];
    int comp[n];
    for (int i = 0; i < n; i++)
    {
        out[i] = 0;
        comp[i] = i + 2;
    }
    for (int i = 0; i < m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int t = l;
        while (t <= r)
        {
            int next_val = comp[t - 1];
            if (out[t - 1] == 0 && t != x)
            {
                out[t - 1] = x;
            }
            comp[t - 1] = r + 1;
            if (t >= x)
            {
                comp[t - 1] = x;
            }
            t = next_val;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }
    return 0;
}