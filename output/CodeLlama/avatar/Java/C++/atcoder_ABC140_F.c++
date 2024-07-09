#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int size = (1 << N);
    int S[size];
    bool spawned[size];
    spawned[size - 1] = true;
    for (int i = 0; i < size; i++)
        cin >> S[i];
    sort(S, S + size);
    vector<int> active;
    active.push_back(S[size - 1]);
    spawned[size - 1] = true;
    for (int i = 0; i < N; i++)
    {
        active.sort(greater<int>());
        vector<int> activated;
        int next = size - 1;
        for (int slime : active)
        {
            while (next >= 0 && (S[next] >= slime || spawned[next]))
                next--;
            if (next < 0)
            {
                cout << "No" << endl;
                return 0;
            }
            spawned[next] = true;
            activated.push_back(S[next]);
        }
        active.insert(active.end(), activated.begin(), activated.end());
    }
    cout << "Yes" << endl;
    return 0;
}