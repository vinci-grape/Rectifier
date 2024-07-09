#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    vector<int> p(x), q(y), r(c);
    for (int i = 0; i < x; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < y; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < c; i++) {
        cin >> r[i];
    }
    sort(p.begin(), p.end(), greater<int>());
    sort(q.begin(), q.end(), greater<int>());
    sort(r.begin(), r.end(), greater<int>());
    vector<int> pq = p;
    pq.insert(pq.end(), q.begin(), q.end());
    sort(pq.begin(), pq.end());
    for (int i = 0; i < min(x + y, a + b, c); i++) {
        if (pq[i] < r[i]) {
            pq[i] = r[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < pq.size(); i++) {
        sum += pq[i];
    }
    cout << sum << endl;

    return 0;
}