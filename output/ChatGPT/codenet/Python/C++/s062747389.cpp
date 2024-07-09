#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a == b) {
        cout << a + b;
    } else {
        cout << max(a, b) * 2 - 1;
    }
    return 0;
}