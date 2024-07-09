#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isupper(c)) {
            c += 32;
            cout << c;
        } else if (islower(c)) {
            c -= 32;
            cout << c;
        } else {
            cout << c;
        }
    }
    cout << endl;
    
    return 0;
}