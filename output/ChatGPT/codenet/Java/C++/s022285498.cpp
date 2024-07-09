#include <bits/stdc++.h>
using namespace std;

class Task {
public:
    void solve(int testNumber, istream& in, ostream& out) {
        int n;
        in >> n;
        vector<int> countArr(n + 1);
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
            out << countArr[i] << endl;
        }
    }
};

void solve() {
    Task task;
    task.solve(1, cin, cout);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}