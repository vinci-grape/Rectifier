#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<vector<int>> ope(m);
    for (int i = 0; i < m; i++) {
        vector<int> temp(2);
        cin >> temp[0] >> temp[1];
        ope[i] = temp;
    }
    ope = sort(ope.begin(), ope.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < ope[j][1]) {
            a[i] = ope[j][1];
            ope[j][0] -= 1;
            if (ope[j][0] == 0) {
                j += 1;
                if (j == m) {
                    break;
                }
            }
        }
    }
    cout << accumulate(a.begin(), a.end(), 0);
    return 0;
}