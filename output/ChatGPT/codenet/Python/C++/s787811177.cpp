#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ls(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> ls[i][0] >> ls[i][1];
    }

    sort(ls.begin(), ls.end(), [](const vector<int>& a, const vector<int>& b) {
        return (a[0] + a[1]) > (b[0] + b[1]);
    });

    int taka = 0;
    int aoki = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            taka += ls[i][0];
        } else {
            aoki += ls[i][1];
        }
    }

    cout << (taka - aoki) << endl;

    return 0;
}