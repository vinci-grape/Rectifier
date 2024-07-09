#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    int mod_arr[n];
    int mod_cnt[2019];
    int radix = 1;
    for (int i = 0; i < n; i++) {
        int tmp = (s[n - 1 - i] - '0') * radix % 2019;
        if (i != 0) tmp = (tmp + mod_arr[i - 1]) % 2019;
        mod_arr[i] = tmp;
        mod_cnt[tmp]++;
        radix = radix * 10 % 2019;
    }
    long ans = 0;
    mod_cnt[0]++;
    for (int i = 0; i < 2019; i++) {
        ans += mod_cnt[i] * (mod_cnt[i] - 1) / 2;
    }
    cout << ans << endl;
}