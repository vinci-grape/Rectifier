#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> XY(N);
    for (int i = 0; i < N; i++)
    {
        cin >> XY[i].first >> XY[i].second;
    }
    for (int i = 0; i < N; i++)
    {
        vector<double> D(N);
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                D[j] = atan2(XY[i].first - XY[j].first, XY[i].second - XY[j].second);
            }
        }
        sort(D.begin(), D.end());
        D.push_back(D[0] + 2 * 3.14159265358979323846);
        double ans = 0;
        for (int j = 0; j < N; j++)
        {
            if (D[j + 1] - D[j] >= 3.14159265358979323846)
            {
                ans = (D[j + 1] - D[j]) - 3.14159265358979323846;
            }
        }
        cout << ans / (2 * 3.14159265358979323846) << endl;
    }
    return 0;
}