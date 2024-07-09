#include <iostream>
#include <vector>

using namespace std;

const int mod = 998244353;
const int __N = 8000;

vector<int> g1 = {1, 1};
vector<int> g2 = {1, 1};
vector<int> inverse = {0, 1};

int cmb(int n, int r, int mod) {
    if (r < 0 || r > n) {
        return 0;
    }
    r = min(r, n - r);
    return (1LL * g1[n] * g2[r] % mod * g2[n - r]) % mod;
}

int kumiawase(int p, int q) {
    return cmb(p + q - 1, q - 1, mod);
}

int solve(int n, int K, int N) {
    assert(n <= K + 1);
    int ans = 0;
    int kumi = (n - 1) / 2;
    for (int p = 0; p <= kumi; p++) {
        if (p > N) {
            break;
        }
        ans += (1LL << p) * cmb(kumi, p, mod) * kumiawase(N - p, p + (K - kumi * 2 - (n % 2 == 0 ? 1 : 0)));
        if (n % 2 == 0 && N - p - 1 >= 0) {
            ans += (1LL << p) * cmb(kumi, p, mod) * kumiawase(N - p - 1, p + (K - kumi * 2 - (n % 2 == 0 ? 1 : 0)));
        }
    }
    return ans;
}

int main() {
    int K, N;
    cin >> K >> N;

    for (int i = 2; i <= __N; i++) {
        g1.push_back((1LL * g1.back() * i) % mod);
        inverse.push_back((-1LL * inverse[mod % i] * (mod / i)) % mod);
        g2.push_back((1LL * g2.back() * inverse.back()) % mod);
    }

    vector<int> ans;
    for (int i = 2; i <= 2 * K; i++) {
        if (i <= K + 1) {
            int tmp = solve(i, K, N) % mod;
            ans.push_back(tmp);
            cout << tmp << endl;
        } else {
            cout << ans[ans.size() - i + K] << endl;
        }
    }

}