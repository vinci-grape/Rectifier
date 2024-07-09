#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int count_div_2 = 0;
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            cnt += 1;
        }
        if (count_div_2 == 0) {
            count_div_2 = cnt;
        } else if (cnt!= count_div_2) {
            cout << 0 << endl;
            return 0;
        }
    }
    int my_lcm = 1;
    for (int i = 0; i < n; ++i) {
        my_lcm = lcm(my_lcm, a[i]);
    }
    if (my_lcm > m) {
        cout << 0 << endl;
        return 0;
    }
    int tmp = m / my_lcm;
    int ans = (tmp + 1) / 2;
    cout << ans << endl;
    return 0;
}