#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    int ans = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                int a = L[i];
                int b = L[j];
                int c = L[k];
                if (a == b || b == c || c == a) {
                    continue;
                }
                if (a+b>c && b+c>a && c+a>b) {
                    ans += 1;
                    // cout << "i:j:k:{},{},{}" << i+1 << "," << j+1 << "," << k+1 << endl;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}