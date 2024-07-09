#include <iostream>
using namespace std;
int main()
{
    int t, s, q, ans = 0;
    cin >> t >> s >> q;
    while (s < t)
    {
        s *= q;
        ans++;
    }
    cout << ans;
    return 0;
}