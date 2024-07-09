#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> Q_groups(Q, vector<int>(4));
    for (int i = 0; i < Q; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> Q_groups[i][j];
        }
    }

    int max_score = 0;
    for (auto p : combinations_with_replacement(range(1, M + 1), r=N))
    {
        int temp_score = 0;
        for (auto q : Q_groups)
        {
            if (p[q[1] - 1] - p[q[0] - 1] == q[2])
            {
                temp_score += q[3];
            }
        }
        max_score = max(max_score, temp_score);
    }

    cout << max_score << endl;

    return 0;
}