#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string d = "";
    for (char c : s) {
        switch (c) {
            case '0':
                d += "0";
                break;
            case '1':
                d += "1";
                break;
            case 'B':
                if (d.length() > 0) {
                    d.erase(d.length() - 1);
                }
                break;
        }
    }
    cout << d << "\n";
    return 0;
}