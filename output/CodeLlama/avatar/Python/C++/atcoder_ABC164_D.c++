#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l = 2019;
    int m[l], a = 0, r = 0;
    for (int i = 0; i < s.length(); i++) {
        a += (s[i] - '0') * pow(10, i, l);
        r += m[a % l];
        m[a % l]++;
    }
    cout << r << endl;
    return 0;
}