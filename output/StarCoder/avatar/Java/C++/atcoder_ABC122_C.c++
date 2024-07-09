#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int range[q][2];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> range[i][j];
        }
    }

    int frag[n + 1];
    int rui[n + 1];
    frag[0] = 0;
    frag[1] = 0;
    rui[0] = 0;
    rui[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (s[i - 2] == 'A' && s[i - 1] == 'C') {
            frag[i] = frag[i - 1] + 1;
        } else {
            frag[i] = frag[i - 1];
        }
        rui[i] = rui[i - 1] + frag[i];
    }

    for (int i = 0; i < q; i++) {
        int left = range[i][0];
        int right = range[i][1];
        cout << rui[right] - rui[left] << endl;
    }

    return 0;
}