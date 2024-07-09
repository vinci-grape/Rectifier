#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].second;
        A[i].first = i + 1;
    }
    sort(A.begin(), A.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });
    for (int i = 0; i < n - 1; i++)
    {
        cout << A[i].first << " ";
    }
    cout << A[n - 1].first;
    return 0;
}