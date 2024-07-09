#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    long **nchoosek = new long*[4001];
    for (int i = 0; i < 4001; i++) {
        nchoosek[i] = new long[4001];
        nchoosek[i][0] = nchoosek[i][i] = 1;
    }
    for (int i = 2; i < 4001; i++) {
        for (int j = 1; j < i; j++) {
            nchoosek[i][j] = (nchoosek[i - 1][j] + nchoosek[i - 1][j - 1]) % 998244353;
        }
    }
    long times2 = 1;
    long total = 0;
    for (int i = 0; i <= k; i++) {
        int pairs;
        if (i > k) {
            pairs = k - i / 2;
        } else {
            pairs = (i - 1) / 2;
        }
        int active = k - 2 * pairs;
        if (i % 2 == 0) {
            active -= 1;
        }
        for (int j = 0; j <= pairs; j++) {
            long choice = times2 * nchoosek[pairs][j] % 998244353;
            times2 = times2 * 2 % 998244353;
            if (active + j - 1 < 0) {
                continue;
            }
            total += choice * nchoosek[n + active - 1][active + j - 1] % 998244353;
            if (i % 2 == 0) {
                total += choice * nchoosek[n + active - 2][active + j - 1] % 998244353;
            }
            total %= 998244353;
        }
    }
    cout << total << endl;
    return 0;
}