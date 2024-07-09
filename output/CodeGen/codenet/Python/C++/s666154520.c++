#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 10 ** 5; ++i) {
        if (i * i > n) {
            cout << (i - 1) * (i - 1) << endl;
            return 0;
        }
    }
    return 0;
}