#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    map<int, int> map;
    priority_queue<int> nums;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        nums.push(tmp);
        map[tmp] = i;
    }
    int bin = 0;
    int diff = 0;
    while (!nums.empty()) {
        int num = nums.top();
        int idx = map[num];
        if ((bin % 2) != (idx % 2)) {
            diff++;
        }
        bin++;
        bin %= 2;
        nums.pop();
    }
    int ans = (diff / 2);
    cout << ans << endl;
}