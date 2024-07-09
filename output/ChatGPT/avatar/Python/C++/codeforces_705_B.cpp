#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    int c = 2;
    for (int i = 0; i < n; i++) {
        if (w[i] == 1) {
            cout << c << endl;
        } else if (w[i] % 2 == 0) {
            c = 3 - c;
            cout << c << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}