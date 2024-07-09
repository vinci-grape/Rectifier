#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <complex>
#include <numeric>
#include <chrono>
#include <random>
#include <tuple>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

const ll INF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-10;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

template<class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return true; } return false; }

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll powm(ll a, ll b) { ll res = 1; while (b) { if (b & 1) res = res * a % MOD; a = a * a % MOD; b >>= 1; } return res; }
ll inv(ll a) { return powm(a, MOD - 2); }
ll modFact(ll n) { ll res = 1; for (ll i = 2; i <= n; i++) res = res * i % MOD; return res; }
ll fact(ll n) { ll res = 1; for (ll i = 2; i <= n; i++) res *= i; return res; }
ll modComb(ll n, ll r) { return modFact(n) * inv(modFact(r)) % MOD * inv(modFact(n - r)) % MOD; }
ll comb(ll n, ll r) { ll res = 1; for (ll i = 0; i < r; i++) { res *= n - i; res /= i + 1; } return res; }
bool isPrime(ll a) { if (a <= 1) return false; for (ll i = 2; i * i <= a; i++) { if (a % i == 0) return false; } return true; }
ll modinv(ll a, ll m) { ll b = m, u = 1, v = 0; while (b) { ll t = a / b; a -= t * b; swap(a, b); u -= t * v; swap(u, v); } u %= m; if (u < 0) u += m; return u; }
ll modlog(ll a, ll n, ll m) { ll r = 1, e = 0, f = 0, x, s; while (f * f < m) f = ++e * e; map<ll, ll> R; while ((s = R[a % m]) == 0 && a % m) R[a % m] = r, r = r * a % m, a = a * a % m; if (a % m) { if (gcd(r, m) == 1) { for (x = 1; x * x < f; x++); x *= x; s = R[inv(r)]; for (int i = 1; i <= x; i++) { s = s * r % m; if (s == n) return i * x - e; } } return -1; } if (n % m == 0) return 0; return -1; }
string nextPermutation(string s) { next_permutation(s.begin(), s.end()); return s; }
bool nextPermutation(vector<int>& a) { return next_permutation(a.begin(), a.end()); }

class FastScanner {
private:
    std::istream& in;
    std::vector<char> buffer;
    size_t ptr;
    size_t buflen;
    bool hasNextByte() {
        if (ptr < buflen) {
            return true;
        }
        else {
            ptr = 0;
            buflen = in.readsome(buffer.data(), buffer.size());
            if (buflen <= 0) {
                return false;
            }
        }
        return true;
    }
    int readByte() {
        if (hasNextByte()) return buffer[ptr++];
        else return -1;
    }
    bool isPrintableChar(int c) {
        return 33 <= c && c <= 126;
    }

public:
    FastScanner(std::istream& in = std::cin, size_t buf_size = 1 << 20) : in(in), buffer(buf_size), ptr(0), buflen(0) {}
    FastScanner(const FastScanner&) = delete;
    FastScanner(FastScanner&&) = delete;
    FastScanner& operator=(const FastScanner&) = delete;
    FastScanner& operator=(FastScanner&&) = delete;
    ~FastScanner() = default;

    bool hasNext() {
        while (hasNextByte() && !isPrintableChar(buffer[ptr])) ptr++;
        return hasNextByte();
    }

    std::string next() {
        if (!hasNext()) throw std::runtime_error("FastScanner::next: End Of Stream");
        std::string str;
        int b = readByte();
        while (isPrintableChar(b)) {
            str.push_back(static_cast<char>(b));
            b = readByte();
        }
        return str;
    }

    template<class T>
    typename std::enable_if<std::is_integral<T>::value, T>::type next() {
        if (!hasNext()) throw std::runtime_error("FastScanner::next: End Of Stream");
        T val = 0;
        bool minus = false;
        int b = readByte();
        if (b == '-') {
            minus = true;
            b = readByte();
        }
        if (b < '0' || '9' < b) {
            throw std::runtime_error("FastScanner::next: invalid character");
        }
        while (true) {
            if ('0' <= b && b <= '9') {
                val *= 10;
                val += b - '0';
            }
            else if (b == -1 || !isPrintableChar(b)) {
                return minus ? -val : val;
            }
            else {
                throw std::runtime_error("FastScanner::next: invalid character");
            }
            b = readByte();
        }
    }
};


void solve() {
    int n, m;
    FastScanner sc;
    n = sc.next<int>();
    m = sc.next<int>();
    map<int, int> mp;

    for (int i = 0; i < m; i++) {
        int s = sc.next<int>();
        int c = sc.next<int>();
        if (mp.find(s) != mp.end() && mp[s] != c) {
            cout << -1 << endl;
            return;
        }
        mp[s] = c;
    }

    for (int i = 0; i < 1000; i++) {
        string s = to_string(i);
        bool flag = true;
        if (s.length() < n) continue;
        for (int j = 0; j < n; j++) {
            if ((mp.find(j + 1) != mp.end() && mp[j + 1] != s[j] - '0') || (mp.find(j + 1) == mp.end() && s[j] != '0')) {
                if (mp.find(j + 1) == mp.end() && j == 0 && s[j] == '1') {
                    continue;
                }
                flag = false;
                break;
            }
        }
        if (flag && s.length() == n) {
            cout << s << endl;
            return;
        }
    }

    cout << -1 << endl;
}