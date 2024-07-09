#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (all_of(arr.begin(), arr.end(), [=](int x) { return x == arr[0]; }))
    {
        cout << 0 << endl;
        return 0;
    }
    if (k == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    if (!all_of(arr.end() - k, arr.end(), [=](int x) { return x == arr[0]; }))
    {
        cout << -1 << endl;
        return 0;
    }
    int target = arr.back();
    while (k > 1 && arr[k - 2] == target)
    {
        k--;
    }
    cout << k << endl;
    return 0;
}