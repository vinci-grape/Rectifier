#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> leftl(n), rightl(n);
    deque<int> que;
    int index = 0;
    while (index < n) {
        while (!que.empty() && a[que.back()] > a[index]) {
            int ind = que.back();
            rightl[ind] = index - ind - 1;
            que.pop_back();
        }
        que.push_back(index++);
    }
    while (!que.empty()) {
        int ind = que.back();
        rightl[ind] = n - ind - 1;
        que.pop_back();
    }
    index = n - 1;
    while (index >= 0) {
        while (!que.empty() && a[que.back()] > a[index]) {
            int ind = que.back();
            leftl[ind] = ind - index - 1;
            que.pop_back();
        }
        que.push_back(index--);
    }
    while (!que.empty()) {
        int ind = que.back();
        leftl[ind] = ind - index - 1;
        que.pop_back();
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += (long long)a[i] * (leftl[i] + 1) * (rightl[i] + 1);
    }
    cout << ans << endl;
}