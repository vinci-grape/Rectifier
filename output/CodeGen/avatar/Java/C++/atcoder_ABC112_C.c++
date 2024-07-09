#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAX 100

int main() {
    int n;
    scanf("%d", &n);
    vector<int> x(n), y(n), h(n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &x[i], &y[i], &h[i]);
    }
    for (int i = 0; i <= MAX; i++) {
        for (int j = 0; j <= MAX; j++) {
            int ch = check(n, x, y, h, i, j);
            if (ch > 0) {
                cout << i << " " << j << " " << ch << endl;
            }
        }
    }
    return 0;
}

int check(int n, vector<int> x, vector<int> y, vector<int> h, int cx, int cy) {
    int ch = -1;
    for (int i = 0; i < n; i++) {
        if (h[i] > 0) {
            ch = abs(x[i] - cx) + abs(y[i] - cy) + h[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (h[i]!= max(ch - abs(x[i] - cx) - abs(y[i] - cy), 0)) {
            return -1;
        }
    }
    return ch;
}