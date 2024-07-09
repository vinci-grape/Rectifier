#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), 'B'), s.end());
    s.erase(remove(s.begin(), s.end(), 'C'), s.end());
    long long cnt = 0;
    long long tmp = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            tmp++;
        } else if (s[i] == 'D') {
            cnt += tmp;
        } else {
            tmp = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}