#include <iostream>
using namespace std;
int main()
{
    int l, r, curr, s = 0;
    cin >> l >> r;
    curr = r;
    while (curr)
    {
        s++;
        curr /= 10;
    }
    int first = 10 * s;
    int second = first / 2;
    int ans = -1;
    for (int i = l; i <= r; i++)
    {
        if (i >= l && i <= r)
        {
            curr = i;
            string rev = "";
            while (curr)
            {
                rev += to_string((9 - (curr % 10)));
                curr /= 10;
            }
            ans = max(ans, stoi(rev) * i);
        }
    }
    cout << ans;
    return 0;
}