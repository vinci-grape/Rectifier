#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int ans = 1000000000;
    for (int i = 0; i < 101; i++)
    {
        int tmp = 0;
        for (int j = 0; j < n; j++)
            tmp += abs(i - x[j]) * abs(i - x[j]);
        if (tmp < ans)
            ans = tmp;
    }
    cout << ans;
    return 0;
}