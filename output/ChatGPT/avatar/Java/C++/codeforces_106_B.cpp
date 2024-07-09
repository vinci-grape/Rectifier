#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        cin >> vec[i][0] >> vec[i][1] >> vec[i][2] >> vec[i][3];
    }
    int ans = 500;
    int ansprice = 20000;
    for (int i = 0; i < n; i++) {
        int fl = 1;
        for (int j = 0; j < n; j++) {
            if (vec[i][0] < vec[j][0] && vec[i][1] < vec[j][1] && vec[i][2] < vec[j][2]) {
                fl = 0;
            }
        }
        if (fl == 1) {
            if (vec[i][3] < ansprice) {
                ansprice = vec[i][3];
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;
}