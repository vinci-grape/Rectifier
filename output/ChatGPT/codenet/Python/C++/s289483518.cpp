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
    vector<vector<int>> ope(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> ope[i][0] >> ope[i][1];
    }
    sort(ope.begin(), ope.end(), [](const vector<int>& x, const vector<int>& y) {
        return x[1] > y[1];
    });
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < ope[j][1]) {
            a[i] = ope[j][1];
            ope[j][0]--;
            if (ope[j][0] == 0) {
                j++;
                if (j == ope.size()) {
                    break;
                }
            }
        }
        else {
            break;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}