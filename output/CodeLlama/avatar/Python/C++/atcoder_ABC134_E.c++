#include <bits/stdc++.h>
using namespace std;
int binary_search(int key)
{
    int bad = -1, good = 0;
    while (good - bad > 1)
    {
        int mid = (bad + good) / 2;
        if (ans[mid][-1] < key)
            good = mid;
        else
            bad = mid;
    }
    return good;
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> ans;
    for (int _ = 0; _ < N; _++)
    {
        int A;
        cin >> A;
        int idx = binary_search(A);
        if (idx == ans.size())
            ans.push_back({A});
        else
            ans[idx].push_back(A);
    }
    cout << ans.size() << endl;
    return 0;
}