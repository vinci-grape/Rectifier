#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int c[n - 1];
    int s[n - 1];
    int f[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d %d", &c[i], &s[i], &f[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int time = s[i] + c[i];
        for (int j = i + 1; j < n - 1; j++) {
            if (time % f[j]!= 0) {
                time += f[j] - (time % f[j]);
            }
            if (time < s[j]) {
                time = s[j];
            }
            time += c[j];
        }
        printf("%d\n", time);
    }
    return 0;
}