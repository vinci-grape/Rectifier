#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int pmin = 1000, mmin = 0;
    s = "0" + s;
    for (int i = 0; i < s.length(); i++) {
        int v = s[i] - '0';
        int npmin = min(pmin + 10 - (v + 1), mmin + 10 - v);
        int nmmin = min(pmin + v + 1, mmin + v);
        pmin = npmin;
        mmin = nmmin;
    }
    cout << min(pmin, mmin);
}