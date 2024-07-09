#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int total = accumulate(a.begin(), a.end(), 0, bit_xor<int>());
    for (int i = 0; i < n; i++)
        cout << a[i] ^ total << " ";
    return 0;
}