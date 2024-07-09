#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, x, t, flag = 0;
    cin >> N >> K;
    vector<int> L;
    L.push_back(-1);
    for (int i = 0; i < N; i++)
    {
        int ne;
        cin >> ne;
        L.push_back(ne);
    }
    vector<int> path;
    path.push_back(1);
    int ind = 0;
    int count = 0;
    x = 1;
    t = -1;
    map<int, int> Hash;
    Hash[1] = 1;
    for (int i = 0; i < N; i++)
    {
        x = L[x];
        if (Hash[x])
        {
            flag = 1;
            t = Hash[x];
            break;
        }
        path.push_back(x);
        ind++;
        Hash[x] = ind;
    }
    if (flag == 1)
    {
        vector<int> loop;
        for (int i = t; i < path.size(); i++)
        {
            loop.push_back(path[i]);
        }
        if (K < path.size())
        {
            cout << path[K];
        }
        else
        {
            K = K - path.size();
            K = K % loop.size();
            cout << loop[K];
        }
    }
    else
    {
        cout << path[K - 1];
    }
    return 0;
}