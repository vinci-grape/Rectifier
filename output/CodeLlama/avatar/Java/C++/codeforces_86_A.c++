#include <bits/stdc++.h>
using namespace std;

int power(long a) {
    int res = 0;
    while (a > 0) {
        res++;
        a = a / 10;
    }
    return res;
}

long mult(long a) {
    int pow = power(a);
    long max = 0;
    for (int j = 0; j < pow; ++j) {
        max = max * 10 + 9;
    }
    return a * (max - a);
}

int main() {
    long l, r;
    cin >> l >> r;
    long res = 0;
    long maxxes[10];
    long temp = 0;
    for (int i = 0; i < 10; ++i) {
        temp = temp * 10 + 9;
        maxxes[i] = temp / 2 * (temp - temp / 2);
    }
    res = max(mult(l), res);
    res = max(mult(r), res);
    temp = 0;
    for (int i = 0; i < 10; ++i) {
        temp = temp * 10 + 9;
        if (l <= temp / 2 && temp / 2 <= r)
            res = max(maxxes[i], res);
    }
    cout << res << endl;
    return 0;
}