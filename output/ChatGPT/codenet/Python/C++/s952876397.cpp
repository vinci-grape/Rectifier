#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int left = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')') {
            left += 1;
        } else {
            break;
        }
    }

    int left1 = 0;
    int right1 = 0;

    for (int i = left; i < n; i++) {
        if (s[i] == '(') {
            right1 += 1;
        } else if (right1 > 0) {
            right1 -= 1;
        } else {
            left1 += 1;
        }
    }

    left1 += left;
    for (int i = 0; i < right1; i++) {
        s += ')';
    }
    for (int i = 0; i < left1; i++) {
        s = '(' + s;
    }

    cout << s << endl;


    return 0;
}