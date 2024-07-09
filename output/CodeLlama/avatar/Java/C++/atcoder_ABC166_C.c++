#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    long M;
    cin >> N >> M;
    long H[N];
    bool ans[N];
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
        ans[i] = true;
    }
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (H[temp1 - 1] < H[temp2 - 1])
        {
            ans[temp1 - 1] = false;
        }
        else if (H[temp1 - 1] > H[temp2 - 1])
        {
            ans[temp2 - 1] = false;
        }
        else
        {
            ans[temp1 - 1] = false;
            ans[temp2 - 1] = false;
        }
    }
    int ans2 = 0;
    for (int i = 0; i < N; i++)
    {
        if (ans[i])
        {
            ans2++;
        }
    }
    cout << ans2 << endl;
}