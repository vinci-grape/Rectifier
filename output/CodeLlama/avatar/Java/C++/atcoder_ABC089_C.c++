#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long cnt[5] = {0};
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str[0] == 'M')
            cnt[0]++;
        else if (str[0] == 'A')
            cnt[1]++;
        else if (str[0] == 'R')
            cnt[2]++;
        else if (str[0] == 'C')
            cnt[3]++;
        else if (str[0] == 'H')
            cnt[4]++;
    }
    long res = cnt[0] * cnt[1] * cnt[2] + cnt[0] * cnt[1] * cnt[3] + cnt[0] * cnt[1] * cnt[4] + cnt[0] * cnt[2] * cnt[3] + cnt[0] * cnt[2] * cnt[4] + cnt[0] * cnt[3] * cnt[4] + cnt[1] * cnt[2] * cnt[3] + cnt[1] * cnt[2] * cnt[4] + cnt[1] * cnt[3] * cnt[4] + cnt[2] * cnt[3] * cnt[4];
    cout << res << endl;
    return 0;
}