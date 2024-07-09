#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

class TaskC {
public:
    int n;
    long cnt[5];
    TaskC() {
        n = 0;
        memset(cnt, 0, sizeof(cnt));
    }
    void solve(int testNumber, Scanner in, PrintWriter out) {
        n = in.nextInt();
        for (int i = 0; i < n; ++i) {
            string str = in.next();
            if (str[0] == 'M') {
                cnt[0]++;
            } else if (str[0] == 'A') {
                cnt[1]++;
            } else if (str[0] == 'R') {
                cnt[2]++;
            } else if (str[0] == 'C') {
                cnt[3]++;
            } else if (str[0] == 'H') {
                cnt[4]++;
            }
        }
        long res = cnt[0] * cnt[1] * cnt[2] + cnt[0] * cnt[1] * cnt[3] + cnt[0] * cnt[1] * cnt[4] + cnt[0] * cnt[2] * cnt[3] + cnt[0] * cnt[2] * cnt[4] + cnt[0] * cnt[3] * cnt[4] + cnt[1] * cnt[2] * cnt[3] + cnt[1] * cnt[2] * cnt[4] + cnt[1] * cnt[3] * cnt[4] + cnt[2] * cnt[3] * cnt[4];
        out << res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        TaskC solver;
        solver.solve(t, cin, cout);
    }
    return 0;
}