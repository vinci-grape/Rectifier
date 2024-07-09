#include <bits/stdc++.h>
using namespace std;
int main()
{
    int VP, VD, T, F, C, answer = 0;
    double start;
    cin >> VP >> VD >> T >> F >> C;
    if (VD <= VP)
    {
        cout << "0" << endl;
        return 0;
    }
    start = T;
    while (true)
    {
        double x = start * VP / (VD - VP);
        if ((start + x) * VP >= C)
        {
            break;
        }
        start += 2 * x + F;
        answer++;
    }
    cout << answer << endl;
    return 0;
}