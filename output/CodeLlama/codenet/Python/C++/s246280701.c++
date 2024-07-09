#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int ans = 1000000000;
    for (int i = 0; i < 101; i++) {
        int tmp[n];
        for (int j = 0; j < n; j++) {
            tmp[j] = pow(abs(i - x[j]), 2);
        }
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += tmp[j];
        }
        if (sum < ans) {
            ans = sum;
        }
    }
    cout << ans << endl;
}