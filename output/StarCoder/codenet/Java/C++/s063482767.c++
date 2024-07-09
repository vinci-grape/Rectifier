#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int> q;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += q.top();
        q.pop();
    }
    cout << (q.top() < sum? "Yes" : "No") << endl;
}