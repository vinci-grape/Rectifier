#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string d;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1') {
            d += s[i];
        } else if (s[i] == 'B' && d.size() > 0) {
            d.pop_back();
        }
    }
    cout << d << endl;
}