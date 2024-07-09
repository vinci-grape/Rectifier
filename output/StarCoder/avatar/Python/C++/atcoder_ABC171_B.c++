#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    cout << sum;
    return 0;
}