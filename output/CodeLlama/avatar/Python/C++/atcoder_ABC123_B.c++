#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, e, ans = 0;
    cin >> n;
    int menu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> menu[i];
        e = menu[i] % 10;
        if (e == 0)
            e = 10;
        menu[i] = menu[i] / e * 10;
    }
    sort(menu, menu + n);
    for (int i = 1; i < n; i++)
    {
        ans += ceil(menu[i] / 10.0) * 10;
    }
    cout << ans + menu[0];
    return 0;
}