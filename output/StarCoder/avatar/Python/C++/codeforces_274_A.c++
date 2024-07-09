#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    set<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k!= 0 || s.find(arr[i] / k)!= s.end())
            s.insert(arr[i]);
        else
            s.erase(arr[i] / k);
        ans = max(ans, s.size());
    }
    cout << ans;
    return 0;
}