#include <bits/stdc++.h>
using namespace std;
int main() {
    long startTime = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long div = (long)pow(10, 9) + 7;
    long A[n];
    long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 60; i++) {
        long a = 0;
        long count1 = 0;
        for (int j = 0; j < n; j++) {
            if ((A[j] >> i & 1) == 1) count1++;
        }
        a = a + count1 * (n - count1);
        for (int j = 0; j < i; j++) {
            a = (a << 1) % div;
        }
        ans += a;
        ans %= div;
    }
    cout << ans << endl;
    long endTime = clock();
}