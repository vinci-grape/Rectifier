#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ng = 0;
    int ok = n;
    while (ok - ng > 1) {
        int k = (ng + ok) / 2;
        if (isPossible(a, k)) {
            ok = k;
        } else {
            ng = k;
        }
    }
    cout << ok << endl;
}

bool isPossible(vector<int> &a, int k) {
    map<int, int> s;
    int current = 0;
    for (int ai : a) {
        if (ai <= current) {
            if (k == 1) return false;
            while (!s.empty() && s.rbegin()->first >= ai) s.erase(s.rbegin()->first);
            int p = ai - 1;
            while (true) {
                if (p < 0) return false;
                int sp = s.count(p) + 1;
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