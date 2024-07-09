#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
vector<vector<int> > F;
vector<vector<int> > P;
int ans = -1;

int main() {
    cin >> n;
    F.resize(n);
    P.resize(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> F[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> P[i][j];
        }
    }
    for (int i = 1; i < (1 << 10); i++) {
        int tmp = 0;
        vector<int> lst(n, 0);
        for (int j = 0; j < 10; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < n; k++) {
                    lst[k] += F[k][j];
                }
            }
        }
        for (int k = 0; k < n; k++) {
            tmp += P[k][lst[k]];
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}