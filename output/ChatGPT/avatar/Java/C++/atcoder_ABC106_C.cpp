#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    long long k;
    cin >> k;
    int n = str.length();
    for (int i = 0; i < k; i++) {
        if (str[i] == '1') {
            if (i == k - 1) {
                cout << 1 << endl;
                return 0;
            }
        } else {
            cout << str[i] << endl;
            return 0;
        }
    }
}