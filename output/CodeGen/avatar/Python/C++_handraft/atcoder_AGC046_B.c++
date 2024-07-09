#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int A, B, C, D;
int m;
vector<int> d[1001];

int main() {
    cin >> A >> B >> C >> D >> m;
    d[A].push_back(B);
    for (int i = A; i <= C; i++) {
        for (int j = B; j <= D; j++) {
            d[i].push_back(j);
        }
    }
    int ans = 0;
    for (int i = A; i <= C; i++) {
        for (int j = B; j <= D; j++) {
            ans += (d[i][j] * i * j - d[i][j - 1] * i * (j - 1) + d[i - 1][j] * (i - 1) * j - d[i - 1][j - 1] * (i - 1) * (j - 1)) % m;
        }
    }
    cout << ans << endl;
    return 0;
}