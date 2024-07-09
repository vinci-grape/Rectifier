#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int shortage[M];

    for (int i = 0; i < M; i++) {
        int A;
        cin >> A;
        shortage[i] = N > A ? N - A : 0;
    }

    sort(shortage, shortage + M);

    int ans = 0;

    for (int i = 0; i < M - 1; i++) {
        ans += shortage[i];
    }

    cout << ans << endl;

    return 0;
}