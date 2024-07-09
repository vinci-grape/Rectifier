#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
int gcd(int a,int b) {
    return b > 0 ? gcd(b, a % b) : a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int gcdVal = accumulate(a.begin(), a.end(), 0, [](int x, int y) { return gcd(x, y); });
    cout << gcdVal << endl;
}