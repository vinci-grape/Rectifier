#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    char l[str.length()];
    l = str.c_str();
    for (int i = 0; i < n; i++) {
        if (l[i]!= '4' && l[i]!= '7') {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < n / 2; i++) {
        int x = 0;
        for (int j = i; j < n - i - 1; j++) {
            x += (int)l[j];
        }
        int y = 0;
        for (int j = n - i - 1; j > i; j--) {
            y += (int)l[j];
        }
        if (x == y) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}