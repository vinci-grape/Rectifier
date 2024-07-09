#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string c;
    cin >> c;

    int num_w = c.count('W');
    int num_r = N - num_w;

    string comp = "R"*num_r + "W"*num_w;
    int ans = 0;
    for (int i = 0; i < num_r; i++)
    {
        if (c[i]!= comp[i])
        {
            ans += 1;
        }
    }

    ans = min(num_w, num_r, ans);
    cout << ans << endl;
}