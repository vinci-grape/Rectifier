#include <iostream>
#include <queue>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::queue<int> q1;
    std::queue<int> q2;

    for (int i = 1; i <= n; i++) {
        int num;
        std::cin >> num;
        q1.push(num);
        q2.push(i);
    }

    int ans = 0;
    while (!q1.empty()) {
        if (q1.front() <= m) {
            q1.pop();
            ans = q2.front();
            q2.pop();
        } else if (q1.front() > m) {
            int x = q1.front();
            q1.pop();
            int val = x - m;
            q1.push(val);
            int val2 = q2.front();
            q2.pop();
            q2.push(val2);
        }
    }

    std::cout << ans << std::endl;

}