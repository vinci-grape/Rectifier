#include <bits/stdc++.h>
using namespace std;

class Fast {
public:
    void sol(std::istream &cin, std::ostream &cout) {
        string s;
        cin >> s;
        int cum[s.length() + 1];
        cum[0] = cum[s.length()] = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) cum[i] = cum[i - 1] + 1;
            else cum[i] = cum[i - 1];
        }
        int q;
        cin >> q;
        while (q--!= 0) {
            cin >> l >> r;
            cout << cum[r] - cum[l - 1] << endl;
        }
    }
};

int main() {
    Fast f;
    f.sol(cin, cout);
    return 0;
}