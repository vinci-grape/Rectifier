#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz";
    vector<vector<char>> k(9);
    for (int i = 0; i < 9; i++) {
        k[i] = vector<char>(s.substr(i * 4 + 2, 3));
    }
    while (n--) {
        string c;
        cin >> c;
        int l = -1, a = 0;
        for (int i = 0; i < c.length(); i++) {
            if (c[i] != '0') {
                a = c[i] - '1';
                l = (l + 1) % k[a].size();
            } else if (l >= 0) {
                cout << k[a][l];
                l = -1;
            }
        }
        cout << endl;
    }
    return 0;
}