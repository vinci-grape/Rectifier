#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cards[26] = {0};
    for (int i = 0; i < n; i++)
        cards[s[i] - 'A']++;
    long long ans = 0;
    for (int i = 0; i < k; i++)
    {
        sort(cards, cards + 26);
        long long change = min(cards[25], k - i);
        ans += change * change;
        cards[25] -= change;
        i += change - 1;
    }
    cout << ans << endl;
    return 0;
}