#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans[2];
    for (int i = 1; i <= N; i++) {
        if (i * (i + 1) / 2 < N) continue;
        else {
            ans[0] = i - 1;
            ans[1] = N - (i * (i - 1) / 2);
            break;
        }
    }
    for (int i = 0; i < ans[0] + 1; i++) {
        if (i + 1!= ans[1]) cout << i + 1 << " ";
    }
    return 0;
}