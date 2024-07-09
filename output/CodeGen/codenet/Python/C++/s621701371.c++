#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    string qs[q];
    for (int i = 0; i < q; ++i) {
        cin >> qs[i];
    }
    bool n = false;
    string left = "", right = "";
    for (int i = 0; i < q; ++i) {
        if (qs[i][0] == '1') {
            n =!n;
        }
        if (qs[i][0] == '2') {
            int t, f, c;
            cin >> t >> f >> c;
            f = 1 if f!= 1 else 2;
            if (n) {
                f = 1 if f!= 1 else 2;
            }
            if (f == 1) {
                left += c;
            } else {
                right += c;
            }
        }
    }
    cout << (left + s + right)[::-1] << endl;
    return 0;
}