#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string input;
    cin >> input;
    int max = -1;
    int msgLength[input.length() / 2];
    int count = 0;
    int idx = 0;
    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];
        if (c == '.' || c == '?' || c == '!')
        {
            msgLength[idx++] = ++count;
            if (count > max)
                max = count;
            i++;
            count = 0;
        }
        else
            count++;
    }
    if (max > n)
        cout << "Impossible";
    else
    {
        int ans = 0;
        for (int i = 0; i < idx; i++)
        {
            int l = msgLength[i];
            while (i < idx - 1 && l + msgLength[i + 1] + 1 <= n)
            {
                l += msgLength[i + 1] + 1;
                i++;
            }
            ans++;
        }
        cout << ans;
    }
    return 0;
}