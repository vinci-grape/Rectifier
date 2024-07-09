#include <iostream>
#include <unordered_set>
using namespace std;

const int MOD = 1000000007;
const int INF = 1e9 + 7;

int main() {
    int N;
    cin >> N;
    unordered_set<int> s = {1, 2, 4, 8, 16, 32, 64};
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (s.count(i)) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}