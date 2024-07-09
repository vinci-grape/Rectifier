#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int current_cell = 0;
    while (current_cell <= t)
    {
        current_cell += s[current_cell - 1];
        if (current_cell == t)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}