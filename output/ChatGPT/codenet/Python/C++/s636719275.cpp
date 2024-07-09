#include <iostream>
#include <string>

using namespace std;

int check(string a, string b) {
    int s = 0;
    for (int i = 0; i < a.length(); i++) {
        s += a[i] != b[i];
    }
    return s;
}

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 1e6;
    for (int i = 0; i < s.length(); i++) {
        string a = s.substr(i);
        if (a.length() >= t.length()) {
            ans = min(ans, check(t, a.substr(0, t.length())));
        }
    }

    cout << ans << endl;

    return 0;
}