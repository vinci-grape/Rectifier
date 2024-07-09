#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int count_best = 0, count_tmp = 0;
    for (int i = 0; i < n - 1; i++) {
        if (h[i] >= h[i + 1]) {
            count_tmp++;
        } else {
            if (count_tmp > count_best) {
                count_best = count_tmp;
            }
            count_tmp = 0;
        }
    }
    if (count_tmp > count_best) {
        count_best = count_tmp;
    }
    cout << count_best << endl;
    return 0;
}