#include <iostream>
#include <string>
using namespace std;

int main_b() {
    string s;
    cin >> s;
    int pp = 0;
    int na = 0;
    for (int i = 0; i < s.size(); i++) {
        int c = s[s.size() - i - 1] - '0';
        int cc = na + c;
        na = 0;
        if (cc <= 4) {
            pp += cc;
        } else {
            na = 1;
            if (i == s.size() - 1) {
                pp += 1;
            }
            pp += 10 - cc;
        }
    }
    cout << pp << endl;
    return 0;
}

int main() {
    string s;
    cin >> s;
    int pmin = 1000;
    int mmin = 0;
    s = '0' + s;
    for (int i = 0; i < s.size(); i++) {
        int v = s[s.size() - i - 1] - '0';
        int npmin = min(pmin + 10 - (v + 1), mmin + 10 - v);
        int nmmin = min(pmin + v + 1, mmin + v);
        pmin = npmin;
        mmin = nmmin;
    }
    cout << min(pmin, mmin) << endl;
    return 0;
}