#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int countArr[n + 1];
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            for (int z = 1; z <= 100; z++) {
                int value = x * x + y * y + z * z + x * y + x * z + y * z;
                if (value > n) {
                    break;
                }
                countArr[value]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << countArr[i] << "\n";
    }
    return 0;
}