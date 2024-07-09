#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<double>());
    int o = 2 * n - arr.size();
    double arr_sum = 0;
    for (int i = 0; i < arr.size(); i++)
        arr_sum += arr[i];
    double res = 2e9;
    for (int i = 0; i <= n; i++)
    {
        if (i + o >= n)
            res = min(res, abs(i - arr_sum));
    }
    printf("%.3f", res);
    return 0;
}