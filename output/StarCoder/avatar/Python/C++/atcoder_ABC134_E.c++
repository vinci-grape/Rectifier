#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> ans;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        int idx = lower_bound(ans.begin(), ans.end(), A) - ans.begin();
        if (idx == ans.size())
        {
            ans.push_back({A});
        }
        else
        {
            ans[idx].push_back(A);
        }
    }
    cout << ans.size() << endl;
    return 0;
}