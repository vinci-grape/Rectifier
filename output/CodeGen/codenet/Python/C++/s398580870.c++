#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k%2==1) {
        cout << (n/k) << endl;
    } else {
        cout << (n/k) << " " << (n+k/2)/k << endl;
    }
    return 0;
}