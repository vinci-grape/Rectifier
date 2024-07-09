#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A[2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < N; ++j) {
            int x;
            cin >> x;
            A[i].push_back(x);
        }
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int baselis = A[0][i];
        int groundlis = A[1][i];
        ans += baselis + groundlis;
    }
    cout << ans << endl;
    return 0;
}