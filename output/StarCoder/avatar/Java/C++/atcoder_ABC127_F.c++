#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<int, vector<int>, less<int>> pq1;
        long long sum = 0, sum1 = 0, sum2 = 0;
        int min = 1000000000;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            sum += c;
            if (a == 1) {
                pq.push(b);
                sum1 += b;
            }
            else {
                pq1.push(b);
                sum2 += b;
            }
            if (pq.size() > pq1.size()) {
                sum1 += pq.top();
                sum2 -= pq.top();
                pq1.push(pq.top());
                pq.pop();
            }
            if (pq.size() < pq1.size()) {
                sum1 -= pq1.top();
                sum2 += pq1.top();
                pq.push(pq1.top());
                pq1.pop();
            }
            min = pq.top();
        }
        cout << min << " " << (sum1 * pq.size() + sum2 * pq1.size() + sum) << "\n";
    }
    return 0;
}