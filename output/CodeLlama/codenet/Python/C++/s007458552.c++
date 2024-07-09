#include <bits/stdc++.h>
using namespace std;

#define INF 1000000007
#define MOD 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> c;
    for (auto &ch : s) {
        c[ch]++;
    }

    return cout << (c['R'] > n - c['R'] ? "Yes" : "No"), 0;
}