#include <iostream>
#include <vector>
#include <string>
using namespace std;

int h, w, k;
vector<vector<string>> colorMtr;

bool judge(int hPattern, int wPattern) {
    vector<int> hBitArr(h, 0);
    vector<int> wBitArr(w, 0);

    for (int i = 0; i < h; i++) {
        if (((hPattern >> i) & 1) == 1) {
            hBitArr[i] = 1;
        }
    }

    for (int i = 0; i < w; i++) {
        if (((wPattern >> i) & 1) == 1) {
            wBitArr[i] = 1;
        }
    }

    int black = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (hBitArr[i] == 1 || wBitArr[j] == 1) {
                continue;
            }

            if (colorMtr[i][j] == "#") {
                black++;
            }
        }
    }

    if (black == k) {
        return true;
    } else {
        return false;
    }
}

int pow(int base, int n) {
    int retVal = 1;
    while (n > 0) {
        if ((n & 1) == 1) {
            retVal *= base;
        }
        n >>= 1;
        base *= base;
    }
    return retVal;
}

void solve() {
    cin >> h >> w >> k;

    colorMtr.resize(h, vector<string>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> colorMtr[i][j];
        }
    }

    int hPattern = pow(2, h);
    int wPattern = pow(2, w);

    int ans = 0;

    for (int i = 0; i < hPattern; i++) {
        for (int j = 0; j < wPattern; j++) {
            if (judge(i, j)) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}