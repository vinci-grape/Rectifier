#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    int ans = abs(r[0]);
    for (int i = 1; i < n; i++) {
        ans += abs(r[i] - r[i - 1]);
    }
    cout << ans << endl;

    return 0;
}