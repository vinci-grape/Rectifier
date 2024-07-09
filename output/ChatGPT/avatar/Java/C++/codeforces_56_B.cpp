#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int len;
    cin >> len;
    vector<int> a(len);
    for (int i = 0; i < len; i++) {
        cin >> a[i];
    }
    int l = 0;
    int r = 0;
    bool flag = false;
    bool isTrue = false;
    for (int i = 0; i < len; i++) {
        if (a[i] != i + 1 && !flag) {
            l = i + 1;
            flag = true;
            continue;
        }
        if (a[i] != i + 1 && flag) {
            r = i + 1;
            if ((a[r - 1] - a[r - 2] > 0)) {
                isTrue = true;
                break;
            }
        }
    }
    cout << ((!isTrue) ? to_string(l) + " " + to_string(r) : "0 0") << endl;
}