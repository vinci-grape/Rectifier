#include <bits/stdc++.h>
using namespace std;
int cal(string s, char c) {
    int n = s.length();
    int m = n - 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == c && (m & i) == i) {
            ans ^= 1;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stringstream ss;
    for (int i = 1; i < n; i++) {
        ss << abs(s[i] - s[i - 1]);
    }
    if (n == 2) {
        cout << s[0] << endl;
        return 0;
    }
    s = ss.str();
    if (s.find("1") != string::npos) {
        cout << cal(s, '1') << endl;
    } else {
        cout << cal(s, '2') * 2 << endl;
    }
    return 0;
}