#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int temp = 0;
    int q = 0;
    int w = 0, e = 0;
    bool f = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (temp < a[i]) {
            if (q > b[i]) {
                f = true;
            }
            q = b[i];
            temp = a[i];
        }
        if (temp > a[i]) {
            if (q < b[i]) {
                f = true;
            }
            q = b[i];
            temp = a[i];
        }
        if (a[i] > w) {
            w = a[i];
            if (b[i] < e) {
                f = true;
            }
            e = b[i];
        }
        if (a[i] < w) {
            if (b[i] > e) {
                f = true;
            }
        }
    }
    if (f == true) {
        cout << "Happy Alex" << endl;
    } else {
        cout << "Poor Alex" << endl;
    }

    return 0;
}