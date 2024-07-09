#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<float> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int o = 2 * n - arr.size();
    float arr_sum = 0;
    for (int i = 0; i < arr.size(); i++)
        arr_sum += arr[i];
    float res = 2e9;
    for (int i = 0; i <= n; i++)
    {
        if (i + o >= n)
            res = min(res, abs(i - arr_sum));
    }
    cout << fixed << setprecision(3) << res << endl;
    return 0;
}