#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int gcd = accumulate(a.begin(), a.end(), 0, [](int x, int y) { return gcd(x, y); });
    cout << gcd << endl;
}