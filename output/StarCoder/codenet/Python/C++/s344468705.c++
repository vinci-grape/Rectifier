#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        num = -num;
        if (num >= 0) {
            cout << 1 << endl;
            cout << num << endl;
        } else {
            cout << 2 << endl;
            cout << 0 << " " << num << endl;
        }
    }

    return 0;
}