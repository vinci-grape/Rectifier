#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<pair<int, int>> x;
    priority_queue<int> y;
    for (int i = 0; i < n; i++) {
        int day, salary;
        cin >> day >> salary;
        x.push(make_pair(-day, -salary));
    }
    while (!x.empty()) {
        int d = x.top().first;
        int s = x.top().second;
        x.pop();
        int r = m - y.size();
        if (r >= -d) {
            y.push(-s);
        } else {
            y.push(-s);
            y.pop();
        }
    }
    int totalSalary = 0;
    while (!y.empty()) {
        totalSalary += y.top();
        y.pop();
    }
    cout << totalSalary << endl;

    return 0;
}