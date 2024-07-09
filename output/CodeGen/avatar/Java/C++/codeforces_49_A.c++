#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int length = s.length();
    char ch = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (s[i]!='' && s[i]!= '?') {
            ch = s[i];
            break;
        }
    }
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}