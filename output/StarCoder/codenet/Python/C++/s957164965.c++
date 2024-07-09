#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    vector<int> p(N);
    for (int i = 0; i < N; i++)
        cin >> p[i];
    sort(p.begin(), p.end());

    map<int, vector<int>> candidates;
    for (int i = -1; i <= 102; i++)
    {
        if (i == X)
            continue;
        if (candidates.find(abs(X - i)) == candidates.end())
            candidates[abs(X - i)] = {i};
        else
            candidates[abs(X - i)].push_back(i);
    }

    int smallest = INT_MAX;
    for (auto it = candidates.begin(); it!= candidates.end(); it++)
    {
        if (it->first < smallest)
        {
            smallest = it->first;
        }
    }

    int minNum = INT_MAX;
    for (int i : candidates[smallest])
    {
        if (abs(X - i) < minNum)
        {
            minNum = abs(X - i);
        }
    }

    cout << minNum;
}