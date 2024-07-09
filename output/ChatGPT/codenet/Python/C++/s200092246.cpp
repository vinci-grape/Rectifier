#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ans;

    for (int i = 1; i <= N; i++) {
        if (sum(range(1, i + 1)) < N) {
            continue;
        } else {
            ans = {i - 1,sum(range(1, i + 1)) - N};
            break;
        }
    }

    for (int i = 0; i <= ans[0]; i++) {
        if (i + 1 != ans[1]) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}