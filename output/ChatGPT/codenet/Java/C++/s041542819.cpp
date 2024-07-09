#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long min(long long a, long long b, long long c, long long d, long long e, long long f) {
    return min({a, b, c, d, e, f});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, q;
    cin >> a >> b >> q;
    
    vector<long long> s(a + 2), t(b + 2);
    s[0] = t[0] = -10000000000;
    for (int i = 0; i < a; i++) {
        cin >> s[i + 1];
    }
    for (int i = 0; i < b; i++) {
        cin >> t[i + 1];
    }
    s[a + 1] = t[b + 1] = 20000000000;
    
    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        
        long long sl = x - *prev(lower_bound(s.begin(), s.end(), x + 1));
        long long tl = x - *prev(lower_bound(t.begin(), t.end(), x + 1));
        long long sr = *lower_bound(s.begin(), s.end(), x) - x;
        long long tr = *lower_bound(t.begin(), t.end(), x) - x;
        
        cout << min(max(sl, tl), max(sr, tr), 2 * sl + tr, 2 * tl + sr, sl + 2 * tr, tl + 2 * sr) << endl;
    }
    
    return 0;
}