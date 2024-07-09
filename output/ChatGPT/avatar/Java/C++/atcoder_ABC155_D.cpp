#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
long long k;
vector<long long> a;

bool check(long long x) {
    long long tot = 0;
    for (int i = 0; i < n; i++) {
        long long now = a[i];
        int l = 0, r = n;
        if (now >= 0) {
            while (l < r) {
                int c = (l + r) / 2;
                if (now * a[c] < x)
                    l = c + 1;
                else
                    r = c;
            }
            tot += l;
        } else {
            while (l < r) {
                int c = (l + r) / 2;
                if (now * a[c] >= x)
                    l = c + 1;
                else
                    r = c;
            }
            tot += (n - l);
        }
        if ((long long)a[i] * a[i] < x)
            tot--;
    }
    if (tot / 2 < k)
        return true;
    else
        return false;
}

int main() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long INF = (long long)(1e18) + 1;
    long long l = -INF;
    long long r = INF;
    while (l + 1 < r) {
        long long c = (l + r) / 2;
        if (check(c))
            l = c;
        else
            r = c;
    }
    cout << l << endl;

    return 0;
}