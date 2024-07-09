#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    a = max(a, b);
    b = min(a, b);
    while (a % b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return b;
}

int solve() {
    string s;
    cin >> s;
    string t = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'A') {
            t += 'A';
            i++;
        }
        else if (s[i] == 'B') {
            if (i < s.length() - 1) {
                if (s[i + 1] == 'C') {
                    t += 'D';
                    i += 2;
                }
                else {
                    t += 'X';
                    i++;
                }
            }
            else {
                t += 'X';
                i++;
            }
        }
        else {
            t += 'X';
            i++;
        }
    }
    int total = 0;
    int numA = 0;
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == 'X') {
            numA = 0;
        }
        else {
            if (t[i] == 'A') {
                numA++;
            }
            else {
                total += numA;
            }
        }
    }
    cout << total << endl;
    int INF = pow(10, 25);
    int mod = 7 + pow(10, 9);
    return 0;
}

int main() {
    solve();
}