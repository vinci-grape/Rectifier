#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long a[N];
    int tmp;
    int ans = 0;
    for (int z = 0; N > z; z++) {
        cin >> a[z];
    }
    sort(a, a + N);
    if (N == 1 && a[0] > 1) {
        ans = 1;
    } else {
        for (int j = 0; N > j; j++) {
            if (j == 0 || a[j] != a[j - 1]) {
                tmp = 1;
                for (int i = j+1; N > i; i++) {
                    if (a[j] == a[i]) {
                        tmp++;
                    }
                    else{
                        break;
                    }
                }
                
                if (tmp > a[j]) {
                    ans += tmp - a[j];
                } else if (tmp < a[j]) {
                    ans += tmp;
                }
            
            }
        }
    }
    cout << ans << endl;
}