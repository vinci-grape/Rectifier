#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    if (N % K == 0) {
        cout << 0;
    } else {
        cout << 1;
    }
    return 0;
}