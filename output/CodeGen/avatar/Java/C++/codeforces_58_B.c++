#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << " ";
    int m = n;
    for (int i = n - 1; i > 0; i--) {
        if (m % i == 0) {
            cout << i << " ";
            m = i;
        }
    }
    return 0;
}