#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

class codeforces_95_A {
public:
    codeforces_95_A(void) {
        out = cout.rdbuf();
    }
    void main() {
        int n;
        cin >> n;
        string ss[n];
        for (int i = 0; i < n; i++) {
            cin >> ss[i];
        }
        string cc;
        cin >> cc;
        int m = cc.length();
        char c = cc[0];
        char c_ = c == 'a'? 'b' : 'a';
        char a = c == 'a'? 'b' : 'a';
        char a_ = c == 'a'? 'B' : 'A';
        bool lucky[m];
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                int l = ss[i].length();
                if (m - j >= l && compare(cc, j, ss[i], 0, l) == 0) {
                    for (int h = 0; h < l; h++) lucky[j + h] = true;
                }
            }
        }
        for (int j = 0; j < m; j++) {
            if (lucky[j]) {
                if (cc[j] == c) cc[j] = a_;
                else cc[j] = a;
            }
        }
        cout << cc;
    }
private:
    string cc;
    string ss[100];
    ostream &out;
    char compare(string &cc, int i, string &ss, int j, int m) {
        while (m-- > 0) {
            char a = Character.toUpperCase(ss[i]);
            char b = Character.toUpperCase(cc[j]);
            if (a!= b) return a - b;
            i++;
            j++;
        }
        return 0;
    }
};

int main() {
    int n;
    cin >> n;
    codeforces_95_A o = new codeforces_95_A();
    o.main();
    o.flush();
    return 0;
}