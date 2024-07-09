#include <iostream>
using namespace std;

int main() {
    int m, n, x, y;
    cin >> m >> n >> x >> y;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int x_max = MaxInt(x, a);
    int y_min = MinInt(y, b);
    CheckWar(x_max, y_min);
    return 0;
}

int MaxInt(int x, int a[]) {
    int bignum = x;
    for (int i = 0; i < m; i++)
        bignum = max(bignum, a[i]);
    return bignum;
}

int MinInt(int y, int b[]) {
    int smallnum = y;
    for (int i = 0; i < n; i++)
        smallnum = min(smallnum, b[i]);
    return smallnum;
}

void CheckWar(int a, int b) {
    if (a >= b)
        cout << "War";
    else
        cout << "No War";
}