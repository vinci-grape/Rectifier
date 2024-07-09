#include <iostream>
#include <vector>

using namespace std;

int subtract(int a, int b) {
    if (a > b) {
        int total = 0;
        while (a > 0 && b > 0) {
            total += a / b;
            a = a % b;
            if (a > 0) {
                total += b / a;
                b = b % a;
            }
        }
        return total;
    }
    if (a < b) {
        int total = 0;
        while (a > 0 && b > 0) {
            total += b / a;
            b = b % a;
            if (b > 0) {
                total += a / b;
                a = a % b;
            }
        }
        return total;
    }
    if (a == b) {
        return 1;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> lst;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        lst.push_back(subtract(a, b));
    }
    for (int i : lst) {
        cout << i << endl;
    }
}