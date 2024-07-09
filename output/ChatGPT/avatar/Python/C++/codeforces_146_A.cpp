#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> number(n);
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    int h1 = 0;
    int h2 = 0;
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (number[i] != 4 && number[i] != 7) {
            cout << "NO" << endl;
            x += 1;
            break;
        }
        if (i < n/2) {
            h1 += number[i];
        } else {
            h2 += number[i];
        }
    }
    if (!x) {
        if (h1 == h2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}