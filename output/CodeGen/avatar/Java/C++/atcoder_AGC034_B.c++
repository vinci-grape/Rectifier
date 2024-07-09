#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
using namespace std;

class BABC {
public:
    void solve(int testNumber, string s, ostream &out) {
        long cnt = 0;
        long tmp = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                tmp++;
            } else if (s[i] == 'B') {
                cnt += tmp;
                tmp = 0;
            } else {
                tmp = 0;
            }
        }
        out << cnt;
    }
};

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        string s;
        cin >> s;
        BABC b;
        b.solve(t, s, cout);
    }
    return 0;
}