#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

const int maxn = 1005;
int N;
int A[maxn];
int B[maxn];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        B[i] = 0;
    }
    for (int i = 0; i < N - 1; ++i) {
        int tmp_sum = 0;
        for (int j = i * 2 - 1; j < N; ++j) {
            tmp_sum += B[j];
            tmp_sum %= 2;
        }
        B[i] = tmp_sum ^ A[i];
    }
    cout << sum(B) << endl;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if (B[i] == 1) {
            ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < N; ++i) {
        if (B[i] == 1) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}