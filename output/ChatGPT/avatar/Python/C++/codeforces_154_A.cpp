#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        int a = 0, b = 0;
        for (char j : s) {
            if (j == x[0]) {
                a += 1;
            } else if (j == x[1]) {
                b += 1;
            } else {
                ans = ans + min(a, b);
                a = 0;
                b = 0;
            }
        }
        ans = ans + min(a, b);
    }
    cout << ans << endl;

    return 0;
}