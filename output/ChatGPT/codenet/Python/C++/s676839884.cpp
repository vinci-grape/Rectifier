#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (t.substr(0, t.length() - 1) == s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}