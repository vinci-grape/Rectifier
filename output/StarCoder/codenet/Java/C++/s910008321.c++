#include <iostream>

using namespace std;

int main() {
    int h, a;
    cin >> h >> a;
    if (h % a == 0) {
        cout << h / a;
    } else {
        cout << h / a + 1;
    }
    return 0;
}