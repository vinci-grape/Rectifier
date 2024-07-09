#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c = 1;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == l)
            c += 1;
        else
            c = 1;
        l = a;
    }
    if (c + k > n)
        cout << n - c;
    else
        cout << -1;
}