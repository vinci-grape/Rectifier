#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long long k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> used;
    int idx[n], pos[n];
    int next = 0, cur = 0;
    while (!used.count(next)) {
        used.insert(next);
        idx[next] = cur;
        pos[cur] = next;
        next = a[next];
        cur++;
    }
    long long a = cur - idx[next];
    long long b = idx[next];
    int ans = (10000 * a + k - b) % a + b;
    if (b > k) ans = k;
    cout << pos[ans] + 1 << '\n';
    return 0;
}