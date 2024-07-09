#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[4];
    int i = -1;
    while (i != 3) {
        i = i + 1;
        cin >> str[i];
    }
    int u = -1;
    i = -1;
    int yes = 0;
    while (u != 2) {
        u = u + 1;
        i = -1;
        while (i != 2) {
            i = i + 1;
            if ((str[u][i] == str[u][i + 1] && (str[u + 1][i] == str[u][i] || str[u + 1][i + 1] == str[u][i])) || (str[u + 1][i] == str[u + 1][i + 1] && (str[u][i] == str[u + 1][i] || str[u][i + 1] == str[u + 1][i]))) {
                yes = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (yes == 1) {
            break;
        }
    }
    if (yes == 0) {
        cout << "NO" << endl;
    }

}