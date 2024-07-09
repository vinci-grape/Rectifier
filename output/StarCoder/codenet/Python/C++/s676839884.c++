#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (t.substr(0, t.size() - 1) == s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}