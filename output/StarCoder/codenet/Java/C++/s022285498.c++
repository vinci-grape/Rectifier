#include <bits/stdc++.h>

using namespace std;

class Task {
public:
    void solve(int testNumber, InputReader in, PrintWriter out) {
        int n = in.nextInt();
        int countArr[n + 1];
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
            out.println(countArr[i]);
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Task task;
    task.solve(1, cin, cout);
    return 0;
}