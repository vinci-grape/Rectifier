#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int a1 = 0, a2 = 0;
        for (int i = 1; i < x.length(); i++) {
            if (x[i] == x[i - 1]) {
                if (x[i] == '1')
                    x[i] = '0';
                else
                    x[i] = '1';
                a1++;
            }
        }
        for (int i = x.length() - 1; i > 0; i--) {
            if (x[i] == x[i - 1]) {
                if (x[i - 1] == '1')
                    x[i - 1] = '0';
                else
                    x[i - 1] = '1';
                a2++;
            }
        }
        cout << min(a1, a2) << "\n";
    }
    return 0;
}