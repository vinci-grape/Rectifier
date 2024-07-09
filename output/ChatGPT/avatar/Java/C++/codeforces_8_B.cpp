#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = 0, y = 0, k = 0;
    bool flag = true;
    int co[2][101];
    
    co[0][k] = x;
    co[1][k] = y;
    k++;
    
    for (int i = 0; i < s.length(); ++i) {
        switch (s[i]) {
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
        }
        co[0][k] = x;
        co[1][k] = y;
        k++;
    }
    
    for (int i = 0; i < k - 3; ++i) {
        for (int j = i + 3; j < k; ++j) {
            int dx = co[0][i] - co[0][j];
            int dy = co[1][i] - co[1][j];
            if (dx < 0) dx *= -1;
            if (dy < 0) dy *= -1;
            if ((dx <= 1 && dy == 0) || (dy <= 1 && dx == 0)) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }
    
    if (flag) {
        cout << "OK" << endl;
    } else {
        cout << "BUG" << endl;
    }
    
    return 0;
}