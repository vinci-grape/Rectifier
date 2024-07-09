#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, p = 97;
    cin >> n;
    char c[n];
    for (i = 0; i < 4; i++)
    {
        for (j = i; j < n; j += 4)
            c[j] = (char)p;
        p++;
    }
    for (i = 0; i < n; i++)
        cout << c[i];
    return 0;
}