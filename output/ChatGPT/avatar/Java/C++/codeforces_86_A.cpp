#include <iostream>
#include <cmath>
using namespace std;

int power(long long a) {
    int res = 0;
    while (a > 0) {
        res++;
        a = a / 10;
    }
    return res;
}

long long mult(long long a) {
    int pow = power(a);
    long long max = 0;
    for (int j = 0; j < pow; ++j) {
        max = max * 10 + 9;
    }
    return a * (max - a);
}

int main() {
    long long l, r;
    cin >> l >> r;
    long long res = 0;
    long long maxxes[10];
    long long temp = 0;
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
}