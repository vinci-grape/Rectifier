#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> a(Q), b(Q), c(Q), d(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    int res = 0;
    function<void(vector<int>)> rec;
    rec = [&](vector<int> A) {
        if (A.size() == N)
        {
            int ans = 0;
            for (int i = 0; i < Q; i++)
            {
                if (A[b[i] - 1] - A[a[i] - 1] == c[i])
                {
                    ans += d[i];
                }
            }
            res = max(res, ans);
            return;
        }
        int last_max = 1;
        if (A.size() != 0)
        {
            last_max = A[A.size() - 1];
        }
        for (int i = last_max; i <= M; i++)
        {
            A.push_back(i);
            rec(A);
            A.pop_back();
        }
    };
    rec({});
    cout << res << endl;
    return 0;
}