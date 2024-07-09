#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int n, m;
int a[100];
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
long lcd(long a, long b) {
    return a * b / gcd(a, b);
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    long gcd = 1;
    for (int i = 0; i < n; i++) {
        gcd = gcd * a[i] / gcd(gcd, a[i]);
    }
    long lcd = 1;
    for (int i = 0; i < n; i++) {
        lcd = lcd * a[i] / gcd(lcd, a[i]);
    }
    if (lcd > m) {
        printf("0");
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (lcd % a[i] == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}