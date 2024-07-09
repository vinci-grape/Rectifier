#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int l = 0;
    for (char c : s) {
        if (c != '1') {
            break;
        }
        l++;
    }
    if (l >= k) {
        cout << 1 << endl;
    } else {
        cout << s[l] << endl;
    }
    return 0;
}