#include <bits/stdc++.h>
using namespace std;
int main() {
    int sec, per_num, max_sec, ans_num;
    cin >> sec >> per_num >> max_sec;
    max_sec += 0.5;
    for (int i = sec; i < max_sec; i += sec) {
        ans_num += per_num;
    }
    cout << ans_num;
    return 0;
}