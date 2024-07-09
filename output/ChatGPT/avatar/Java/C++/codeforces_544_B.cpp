#include <iostream>
using namespace std;

void printIsland(int n, int count) {
    int a = (n + 1) / 2;
    int b = n / 2;
    int max = a * a + b * b;

    if (count > max) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0 && count > 0) {
                row += 'L';
                count--;
            } else {
                row += 'S';
            }
        }
        cout << row << endl;
    }
}

int main() {
    int n, count;
    cin >> n >> count;
    printIsland(n, count);

    return 0;
}