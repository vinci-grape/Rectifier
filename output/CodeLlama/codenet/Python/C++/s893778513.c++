#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    int b = l[0];
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += l[i];
        if (l[i] > b) {
            b = l[i];
        }
    }

    if (b < s - b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}