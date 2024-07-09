#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string a;
    cin >> a;
    string b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (a.compare(b) == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}