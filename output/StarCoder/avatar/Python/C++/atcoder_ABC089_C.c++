#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int march[5] = {0};
    for (int i = 0; i < n; i++) {
        if (s[i][0] == 'M') march[0]++;
        if (s[i][0] == 'A') march[1]++;
        if (s[i][0] == 'R') march[2]++;
        if (s[i][0] == 'C') march[3]++;
        if (s[i][0] == 'H') march[4]++;
    }
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += march[i] * march[j] * march[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}