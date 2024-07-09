#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class codeforces_404_A {
public:
    int n;
    char arr[n][n];
    string str[n];
    codeforces_404_A() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = str[i][j];
            }
        }
    }
    char a, b;
    bool res = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (arr[i][j]!= a) {
                    res = false;
                    break;
                }
            } else {
                if (arr[i][j]!= b) {
                    res = false;
                    break;
                }
            }
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
};

int main() {
    int n;
    cin >> n;
    codeforces_404_A a;
    a.n = n;
    a.a = 'a';
    a.b = 'b';
    a.res = true;
    a.a = 'a';
    a.b = 'b';
    a.res = true;
    return 0;
}