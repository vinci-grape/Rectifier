#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    int max = 0;
    while (n--) {
        int f, t;
        cin >> f >> t;
        if (max < f + t) {
            max = f + t;
        }
    }
    cout << max << endl;
    return 0;
}