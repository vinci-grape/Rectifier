#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string ans[n];
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        stringBuilder temp;
        for (int j = 0; j < m; j++) {
            if (str[j] == '-') {
                temp.append("-");
            } else {
                if ((i + j) % 2 == 1) {
                    temp.append("W");
                } else {
                    temp.append("B");
                }
            }
        }
        ans[i] = temp.toString();
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}