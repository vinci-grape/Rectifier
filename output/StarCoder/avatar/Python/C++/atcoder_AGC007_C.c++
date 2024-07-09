#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, d, x;
    cin >> N >> d >> x;
    while (N)
    {
        cout << d + (N - 0.5) * x << endl;
        d += d / N + (5 * x) / (2 * N);
        x += 2 * x / N;
        N--;
    }
    return 0;
}