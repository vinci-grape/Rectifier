#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<string> s(N), t(N);
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> t[i];
        t[i] = stoi(t[i]);
    }
    string X;
    cin >> X;
    int xi = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == X) {
            xi = i;
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (xi < i) {
            ans += t[i];
        }
    }
    cout << ans << endl;
    return 0;
}