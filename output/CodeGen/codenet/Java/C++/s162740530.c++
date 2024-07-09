#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int n, m, a[100], cnt[100], num;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    cnt[0] = 1;
    if (m > 0) {
        if (a[1] == 1) {
            cnt[1] = 0;
            if (num < m) {
                num++;
            }
        } else {
            cnt[1] = 1;
        }
    } else {
        cnt[1] = 1;
    }
    for (int i = 2; i <= n; i++) {
        cnt[i] = cnt[i - 2] + cnt[i - 1];
        cnt[i] %= 1000000007;
        if (m > 0) {
            if (i == a[num]) {
                cnt[i] = 0;
                if (num < m) {
                    num++;
                }
            }
        }
    }
    cout << cnt[n];
    return 0;
}