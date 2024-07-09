#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        a += i;
    for (int i = 0; i < n - 1; i++)
        b += i;
    for (int i = 0; i < n - 2; i++)
        c += i;
    int x = a - b, y = b - c;
    cout << x << endl;
    cout << y << endl;
    return 0;
}