#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;

    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    map<int, vector<int>> candidates;
    for (int i = -1; i <= 100; i++)
    {
        if (find(p.begin(), p.end(), i) != p.end())
        {
            continue;
        }

        if (candidates.find(abs(X - i)) == candidates.end())
        {
            candidates[abs(X - i)] = {i};
        }
        else
        {
            candidates[abs(X - i)].push_back(i);
        }
    }

    int smallest = *min_element(candidates.begin(), candidates.end(), [](auto a, auto b) { return a.first < b.first; });

    int minNum = *min_element(candidates[smallest].begin(), candidates[smallest].end());

    cout << minNum << endl;

    return 0;
}