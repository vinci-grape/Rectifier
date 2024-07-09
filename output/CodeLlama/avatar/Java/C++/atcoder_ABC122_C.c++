#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int range[q][2];
    for (int i = 0; i < q; i++) {
        cin >> range[i][0] >> range[i][1];
    }
    int frag[n + 1];
    int rui[n + 1];
    for (int i = 2; i <= n; i++) {
        if (s[i - 2] == 'A' && s[i - 1] == 'C') {
            frag[i]++;
        }
        rui[i] = rui[i - 1] + frag[i];
    }
    for (int i = 0; i < q; i++) {
        int left = range[i][0];
        int right = range[i][1];
        cout << rui[right] - rui[left] << endl;
    }
}