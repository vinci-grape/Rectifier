#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0] + 1;
    for (int i = 1; i < n; i++)
    {
        ans += abs(arr[i] - arr[i - 1]) + 2;
    }
    cout << ans << endl;
}