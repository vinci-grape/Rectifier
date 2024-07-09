#include <iostream>
#include <vector>

using namespace std;

int main() {
    while (cin) {
        int my1, my2, enemy1;
        cin >> my1 >> my2 >> enemy1;
        vector<bool> used(11, false);
        used[my1] = true;
        used[my2] = true;
        used[enemy1] = true;
        int all = 0;
        int safe = 0;
        for (int i = 1; i <= 10; i++) {
            if (!used[i]) {
                all++;
                if (my1 + my2 + i <= 20) {
                    safe++;
                }
            }
        }
        if (safe * 2 >= all) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}