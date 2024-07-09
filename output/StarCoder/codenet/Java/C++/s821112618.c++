#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz";
    vector<string> v;
    while (s.size() > 0) {
        int pos = s.find(':');
        if (pos == string::npos) {
            v.push_back(s);
            break;
        }
        v.push_back(s.substr(0, pos));
        s = s.substr(pos + 1);
    }
    while (n-- > 0) {
        string s;
        cin >> s;
        int l = -1, a = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]!= '0') {
                a = s[i] - '1';
                l = (l + 1) % v[a].size();
            } else if (l >= 0) {
                cout << v[a][l];
                l = -1;
            }
        }
        cout << endl;
    }
    return 0;
}