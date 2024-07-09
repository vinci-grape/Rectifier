#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << maxLeft(n) << endl;
    }
    return 0;
}

int maxLeft(int n) {
    return n > 2? n - 2 : 0;
}