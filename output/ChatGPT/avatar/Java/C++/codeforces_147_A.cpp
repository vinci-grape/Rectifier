#include <iostream>
#include <string>

using namespace std;

bool isLatinLetter(char c) {
    return c >= 'a' && c <= 'z';
}

bool isPunctuation(char c) {
    if (c == '.') return true;
    if (c == ',') return true;
    if (c == '!') return true;
    if (c == '?') return true;
    return false;
}

int main() {
    string s;
    getline(cin, s);
    string result;
    result += s[0];
    int n = s.length();
    for (int i = 1; i < n; i++) {
        char c = s[i];
        if (isLatinLetter(c)) {
            if (!isLatinLetter(s[i - 1])) {
                result += ' ';
            }
            result += c;
        } else if (isPunctuation(c)) {
            result += c;
        }
    }
    cout << result << endl;
}