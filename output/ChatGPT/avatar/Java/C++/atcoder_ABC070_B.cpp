#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c > b) {
        cout << 0 << endl;
    } else if (a > d) {
        cout << 0 << endl;
    } else if (a < c) {
        cout << min(b, d) - c << endl;
    } else {
        vector<int> l = {a, b, c, d};
        sort(l.begin(), l.end());
        cout << l[2] - l[1] << endl;
    }

    return 0;
}