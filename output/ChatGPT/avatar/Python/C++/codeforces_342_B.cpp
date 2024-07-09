#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    
    int d, i, j, t, l, r, k;
    string c, res;
    if (s < f) {
        d = 1;
        c = "R";
    } else {
        d = -1;
        c = "L";
    }
    
    i = 1;
    j = s;
    cin >> t >> l >> r;
    k = 1;
    
    while (j != f) {
        if (i > t && k < m) {
            cin >> t >> l >> r;
            k++;
        }
        if (i == t && (l <= j && j <= r || l <= j + d && j + d <= r)) {
            res += 'X';
        } else {
            res += c;
            j += d;
        }
        i++;
    }
    
    cout << res << endl;
    
    
    return 0;
}