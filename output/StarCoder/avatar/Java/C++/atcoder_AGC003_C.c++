#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> m;
    priority_queue<int> pq;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        pq.push(tmp);
        m[tmp] = i;
    }
    int bin = 0;
    int diff = 0;
    while (!pq.empty()) {
        int num = pq.top();
        pq.pop();
        int idx = m[num];
        if ((bin % 2)!= (idx % 2)) {
            diff++;
        }
        bin++;
        bin %= 2;
    }
    int ans = diff / 2;
    cout << ans << endl;
}