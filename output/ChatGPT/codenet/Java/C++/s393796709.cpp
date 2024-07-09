#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

void solve() {
    vector<int> xx(2);
    string line;
    getline(cin, line);
    size_t pos = 0;
    for (int i = 0; i < 2; i++) {
        xx[i] = stoi(line.substr(pos), &pos);
    }
    int min = min(xx[0], xx[1]);
    int max = max(xx[0], xx[1]);
    long long res;
    if (min == max) {
        long long f = 1;
        for (int i = 2; i <= min; i++) {
            f = (f * i) % MOD;
        }
        res = (2 * f * f) % MOD;
    } else if (min + 1 == max) {
        long long f = 1;
        for (int i = 2; i <= min; i++) {
            f = (f * i) % MOD;
        }
        res = (f * ((f * max) % MOD)) % MOD;
    } else {
        res = 0;
    }
    cout << res << endl;
}

int main() {
    solve();
    return 0;
}