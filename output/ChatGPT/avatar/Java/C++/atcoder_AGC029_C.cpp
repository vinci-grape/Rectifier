#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class atcoder_AGC029_C {
private:
    int n;
    vector<int> a;
    map<int, int> s;

public:
    void set() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }

    void solve() {
        set();
        int ng = 0;
        int ok = n;
        while (ok - ng > 1) {
            int k = (ng + ok) / 2;
            if (isPossible(k)) {
                ok = k;
            } else {
                ng = k;
            }
        }
        cout << ok << endl;
    }

    bool isPossible(int k) {
        s.clear();
        int current = 0;
        for (int ai : a) {
            if (ai <= current) {
                if (k == 1) return false;
                while (!s.empty() && s.rbegin()->first >= ai) s.erase(prev(s.end()));
                int p = ai - 1;
                while (true) {
                    if (p < 0) return false;
                    int sp = s[p] + 1;
                    s[p] = sp;
                    if (sp == k) {
                        s.erase(p);
                        p--;
                    } else {
                        break;
                    }
                }
            }
            current = ai;
        }
        return true;
    }
};

int main() {
    atcoder_AGC029_C m;
    m.solve();
    return 0;
}