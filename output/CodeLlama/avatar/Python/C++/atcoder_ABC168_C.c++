#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    double C = abs(360 / 60.0 * m - 360 / 12.0 * h - 360 / 12.0 / 60.0 * m);
    if (C > 180)
        C = 360 - C;
    double cosC = cos(C * 3.14159265358979323846 / 180);
    cout << sqrt(a * a + b * b - 2 * a * b * cosC) << endl;
    return 0;
}