#include <bits/stdc++.h>
using namespace std;

void print(int x, int n) {
    int max = n * 2 - 1;
    if (x == 1 || x == max) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    for (int i = x + n - 1; i < x + n + max - 1; i++) {
        cout << (i % max + 1) << endl;
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    print(x, n);
}