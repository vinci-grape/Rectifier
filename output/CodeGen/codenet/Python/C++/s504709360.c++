#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() < 26) {
        for (int i = 0; i < 26; ++i) {
            char c = 'a' + i;
            if (c!= s[i]) {
                cout << s << c;
                return 0;
            }
        }
    } else {
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] > s[i + 1]) {
                string s1 = s.substr(0, i);
                for (int j = 0; j < 26; ++j) {
                    char c = 'a' + j;
                    if (c > s[i] && c!= s1[j]) {
                        cout << s1 << c;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1";
    return 0;
}