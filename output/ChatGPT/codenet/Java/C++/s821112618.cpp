#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = ".,!? :abc:def:ghi:jkl:mno:pqrs:tuv:wxyz";
    vector<string> k(9);
    for (int i = 0; i < 9; i++) {
        k[i] = s.substr(i*4 + 1, 3);
    }
    while (n-- > 0) {
        string c;
        cin >> c;
        int l = -1, a = 0;
        for (int i = 0; i < c.length(); i++) {
            if (c[i] != '0') {
                a = c[i] - '1';
                l = (l + 1) % k[a].length();
            } else if (l >= 0) {
                cout << k[a][l];
                l = -1;
            }
        }
        cout << endl;
    }
}