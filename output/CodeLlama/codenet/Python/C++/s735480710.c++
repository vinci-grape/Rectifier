#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<string> a, b;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (int i = 1; i < n; i += 2) {
        b.push_back(a[i]);
    }
    for (int i = 0; i < n; i += 2) {
        b.push_back(a[i]);
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
    } else {
        for (int i = n - 1; i >= 0; i--) {
            cout << b[i] << " ";
        }
    }
    return 0;
}