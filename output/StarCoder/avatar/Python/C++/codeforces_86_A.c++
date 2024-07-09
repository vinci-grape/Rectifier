#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    int curr = r;
    int s = 0;
    while (curr)
    {
        s++;
        curr /= 10;
    }
    int first = pow(10, s);
    int second = first / 2;
    int ans = -1;
    for (int i = l; i <= r; i++)
    {
        if (i >= l && i <= r)
        {
            curr = i;
            string rev = "";
            for (int k = 0; k < curr; k++)
            {
                rev += to_string(9 - (curr % 10));
                curr /= 10;
            }
            ans = max(ans, stoi(rev) * curr);
        }
    }
    cout << ans << endl;
    return 0;
}