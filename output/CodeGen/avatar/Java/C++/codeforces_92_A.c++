#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, k, i, req;
    cin >> n >> k;
    while (k - req >= 0) {
        if (k - req >= 0) {
            k = k - req;
        } else {
            break;
        }
        i++;
        if (i % n!= 0) req = i % n;
        else req = n;
    }
    cout << k;
    return 0;
}