#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k;
    vector<int> M(n);
    for (int i = 0; i < n; i++)
        cin >> M[i];
    m = 0;
    for (int j = 0; j < n; j++)
    {
        for (int p = 0; p < n; p++)
        {
            if (M[p] == 0)
            {
                cout << p + 1 << " ";
                break;
            }
        }
        for (int l = p + 1 - k; l < p; l++)
            M[l]--;
        M[p]--;
    }
    return 0;
}