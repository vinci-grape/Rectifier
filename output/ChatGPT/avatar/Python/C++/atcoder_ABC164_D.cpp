#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int l = 2019;
    vector<int> m(l, 0);
    int a = 0, r = 0;
    for (int i = 0; i < s.length(); i++) {
        a += (s[s.length()-1-i] - '0') * pow(10, i) % l;
        r += m[a % l];
        m[a % l]++;
    }
    cout << r << endl;

    return 0;
}