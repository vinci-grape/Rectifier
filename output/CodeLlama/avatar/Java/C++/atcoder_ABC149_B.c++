#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long A, B, K;
    cin >> A >> B >> K;
    long long x = A - K;
    long long y = B;
    if (x < 0)
    {
        y = B + x;
        x = 0;
        if (y < 0)
        {
            y = 0;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}