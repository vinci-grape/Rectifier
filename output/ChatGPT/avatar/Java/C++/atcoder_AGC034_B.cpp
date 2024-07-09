#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
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
}