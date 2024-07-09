#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (s.length() == 2) {
        cout << s;
    } else {
        for (int i = s.length() - 1; i >= 0; i--) {
            cout << s[i];
        }
    }
    
    return 0;
}