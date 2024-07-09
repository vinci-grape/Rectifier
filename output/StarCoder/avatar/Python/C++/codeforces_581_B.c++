#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> ans(n);
    int mx = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(0, mx - arr[i] + 1);
        if (arr[i] > mx)
            mx = arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}