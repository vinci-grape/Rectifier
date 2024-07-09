#include <iostream>
using namespace std;

int main() {
    int sec, per_num;
    cin >> sec >> per_num;
    double max_sec;
    cin >> max_sec;
    max_sec += 0.5;
    int ans_num = 0;
    for (int i = sec; i < max_sec; i += sec) {
        ans_num += per_num;
    }
    cout << ans_num << endl;
}