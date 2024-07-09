#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int mods[s.size()];
    int countRemainder[2019];
    memset(countRemainder, 0, sizeof(countRemainder));
    int cnt = 0;

    int m = 1;
    int mod = 0;
    for (int i = 0; i < s.size(); i++) {
        mod += (s[s.size() - i - 1] - '0') * m;
        mod %= 2019;
        m *= 10;
        m %= 2019;

        countRemainder[mod]++;
    }
    countRemainder[0]++;

    for (int i = 0; i < 2019; i++) {
        cnt += int(countRemainder[i] * (countRemainder[i] - 1) / 2);
    }

    cout << cnt << "\n";

    return 0;
}