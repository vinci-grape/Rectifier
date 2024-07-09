#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

class atcoder_ABC106_C {
public:
    static void main(string args[]) {
        string str;
        cin >> str;
        char c[str.length()];
        for (int i = 0; i < str.length(); i++) {
            c[i] = str[i] - '0';
        }
        long k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            if (c[i] == 1) {
                if (i == k - 1) {
                    cout << 1 << endl;
                    return;
                }
            } else {
                cout << c[i];
                return;
            }
        }
    }
};