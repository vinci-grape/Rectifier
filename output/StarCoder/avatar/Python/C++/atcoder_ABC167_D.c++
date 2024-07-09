#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> L(N + 1);
    for (int i = 0; i < N; i++)
        cin >> L[i];
    L.insert(L.begin(), -1);
    vector<int> path;
    int ind = 0, count = 0, x = 1, t = -1, flag = false;
    unordered_map<int, int> Hash;
    for (int i = 0; i <= N; i++)
    {
        int ne = L[x];
        if (Hash[ne])
        {
            flag = true;
            t = Hash[ne];
            break;
        }
        path.push_back(ne);
        ind++;
        Hash[ne] = ind;
        x = ne;
    }
    if (flag)
    {
        vector<int> loop = path;
        loop.erase(loop.begin(), loop.begin() + t);
        if (K < (int)path.size())
            cout << path[K];
        else
        {
            K = K - (int)path.size();
            K = K % loop.size();
            cout << loop[K];
        }
    }
    else
        cout << path[K - 1];
    return 0;
}