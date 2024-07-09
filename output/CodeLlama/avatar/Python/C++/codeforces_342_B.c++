#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    string res;
    if (s < f) {
        int d = 1;
        char c = 'R';
    } else {
        int d = -1;
        char c = 'L';
    }
    int i = 1, j = s;
    int t, l, r;
    int k = 1;
    while (j != f) {
        if (i > t && k < m) {
            cin >> t >> l >> r;
            k++;
        }
        if (i == t && (l <= j <= r || l <= j + d <= r)) {
            res += 'X';
        } else {
            res += c;
            j += d;
        }
        i++;
    }
    cout << res;
    return 0;
}