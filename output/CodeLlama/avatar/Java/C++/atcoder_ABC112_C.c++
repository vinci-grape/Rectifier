#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n], h[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> h[i];
    }
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            int ch = check(n, x, y, h, i, j);
            if (ch > 0) {
                cout << i << " " << j << " " << ch << endl;
            }
        }
    }
}

int check(int n, int x[], int y[], int h[], int cx, int cy) {
    int ch = -1;
    for (int i = 0; i < n; i++) {
        if (h[i] > 0) {
            ch = abs(x[i] - cx) + abs(y[i] - cy) + h[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (h[i] != max(ch - abs(x[i] - cx) - abs(y[i] - cy), 0)) {
            return -1;
        }
    }
    return ch;
}