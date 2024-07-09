#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    vector<int> leftl(N);
    vector<int> rightl(N);
    queue<int> que;
    int index = 0;
    while (index < N) {
        while (!que.empty() && a[que.front()] > a[index]) {
            int ind = que.front();
            que.pop();
            rightl[ind] = index - ind - 1;
        }
        que.push(index++);
    }
    while (!que.empty()) {
        int ind = que.front();
        que.pop();
        rightl[ind] = N - ind - 1;
    }
    index = N - 1;
    while (index >= 0) {
        while (!que.empty() && a[que.front()] > a[index]) {
            int ind = que.front();
            que.pop();
            leftl[ind] = ind - index - 1;
        }
        que.push(index--);
    }
    while (!que.empty()) {
        int ind = que.front();
        que.pop();
        leftl[ind] = ind - index - 1;
    }
    long long ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += (long long)a[i] * (leftl[i] + 1) * (rightl[i] + 1);
    }
    cout << ans << endl;
}