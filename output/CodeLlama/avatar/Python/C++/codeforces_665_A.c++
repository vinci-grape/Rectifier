#include <iostream>
using namespace std;
int main()
{
    int a, at, b, bt, t1, t2, st, fin, now, ans;
    cin >> a >> at;
    cin >> b >> bt;
    cin >> t1 >> t2;
    st = t2 + (t1 - 5) * 60;
    fin = st + at;
    now = 0;
    ans = 0;
    while (now < fin && now < 1140)
    {
        if (now + bt > st)
        {
            ans++;
        }
        now += b;
    }
    cout << ans;
    return 0;
}