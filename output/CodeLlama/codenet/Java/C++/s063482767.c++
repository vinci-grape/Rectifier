#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    int n;
    cin >> n;
    priority_queue<int> queue;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        queue.push(x);
    }
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += queue.top();
        queue.pop();
    }

    // 出力
    cout << (queue.top() < sum ? "Yes" : "No") << endl;
}