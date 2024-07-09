#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    int gen[11] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        gen[arr[i]]++;
    }

    long long ans = 0;

    for (int i = 1; i <= m; i++) {
        for (int k = 1; k <= m; k++) {
            if (i != k) {
                ans += (long long)gen[i] * gen[k];
            }
        }
    }

    cout << ans / 2 << endl;

    return 0;
}