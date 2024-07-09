#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, z = 0;
    cin >> n >> k;
    n++;
    if (n % k!= 0)
        z = k - n % k;
    cout << n + z;
    return 0;
}