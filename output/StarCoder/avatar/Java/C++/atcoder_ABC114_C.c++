#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    long long i = 357;
    int c = 0;
    while (i <= N) {
        string s = to_string(i);
        if (s.find("3")!= string::npos && s.find("5")!= string::npos && s.find("7")!= string::npos) {
            c++;
        }
        string sb = "";
        bool f = false;
        for (int j = 0; j < s.length(); j++) {
            char a = s[s.length() - 1 - j];
            if (f) {
                sb += a;
            } else {
                if (a == '3') {
                    sb += '5';
                    f = true;
                } else if (a == '5') {
                    sb += '7';
                    f = true;
                } else {
                    sb += '3';
                }
            }
        }
        if (!f) {
            sb += '3';
        }
        string sb2 = sb;
        reverse(sb2.begin(), sb2.end());
        i = stoll(sb2);
    }
    cout << c << endl;
    return 0;
}