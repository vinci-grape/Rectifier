#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int ans = 0;
    for (int i = n - 2; i >= n - 2 * n - 1; i -= 2)
    {
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}