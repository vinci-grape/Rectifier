#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int menu[5];
    for (int i = 0; i < 5; i++) {
        string m;
        cin >> m;
        int e = m.back() - '0';
        if (e == 0) {
            e = 10;
        }
        menu[i] = stoi(m);
    }
    sort(menu, menu + 5, [](int a, int b) { return a % 10 < b % 10; });
    int ans = 0;
    for (int i = 1; i < 5; i++) {
        ans += ceil(menu[i] / 10.0) * 10;
    }
    cout << ans + menu[0] << endl;

    return 0;
}