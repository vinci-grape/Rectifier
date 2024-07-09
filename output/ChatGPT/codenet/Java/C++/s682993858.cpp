#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        int sum = 0;
        string s;
        cin >> s;
        if (s == "0") break;
        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            sum += a - '0';
        }
        cout << sum << endl;
    }

    return 0;
}