#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    
    vector<int> leftl(N);
    vector<int> rightl(N);
    stack<int> que;
    int index = 0;
    
    while (index < N) {
        while (!que.empty() && a[que.top()] > a[index]) {
            int ind = que.top();
            que.pop();
            rightl[ind] = index - ind - 1;
        }
        que.push(index++);
    }
    
    while (!que.empty()) {
        int ind = que.top();
        que.pop();
        rightl[ind] = N - ind - 1;
    }
    
    index = N - 1;
    
    while (index >= 0) {
        while (!que.empty() && a[que.top()] > a[index]) {
            int ind = que.top();
            que.pop();
            leftl[ind] = ind - index - 1;
        }
        que.push(index--);
    }
    
    while (!que.empty()) {
        int ind = que.top();
        que.pop();
        leftl[ind] = ind - index - 1;
    }
    
    long long ans = 0;
    
    for (int i = 0; i < N; ++i) {
        ans += (long long)a[i] * (leftl[i] + 1) * (rightl[i] + 1);
    }
    
    cout << ans << endl;
    
    return 0;
}