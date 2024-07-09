#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = 1e9;
    while (l < r) {
        int m = (l + r) / 2;
        if (isPossible(m)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << l << endl;
}

bool isPossible(int k) {
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