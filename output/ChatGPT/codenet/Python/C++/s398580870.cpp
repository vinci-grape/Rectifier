#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (k % 2 == 1) {
        cout << pow(n/k, 3) << endl;
    } else {
        cout << pow(n/k, 3) + pow((n+k/2)/k, 3) << endl;
    }

    return 0;
}