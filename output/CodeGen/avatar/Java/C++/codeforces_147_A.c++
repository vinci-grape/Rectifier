#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isLatinLetter(char c) {
    return (c >= 'a' && c <= 'z');
}

bool isPunctuation(char c) {
    if (c == '.') return true;
    if (c == ',') return true;
    if (c == '!') return true;
    if (c == '?') return true;
    return false;
}

void main() {
    string s;
    cin >> s;
    stringBuilder sb;
    int n = s.length();
    sb.append(s.at(0));
    for (int i = 1; i < n; i++) {
        char c = s.at(i);
        if (isLatinLetter(c)) {
            if (!isLatinLetter(s.at(i - 1))) {
                sb.append(' ');
            }
            sb.append(c);
        } else if (isPunctuation(c)) {
            sb.append(c);
        }
    }
    cout << sb << endl;
}