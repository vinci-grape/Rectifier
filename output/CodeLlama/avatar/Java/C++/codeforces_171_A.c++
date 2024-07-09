#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int t = reverse(m);
    cout << t + n << endl;
    return 0;
}
int reverse(int n)
{
    if (n < 10)
        return n * 10;
    int t = n, r = 0;
    while (t > 0)
    {
        r = (r * 10) + t % 10;
        t = t / 10;
    }
    return r;
}