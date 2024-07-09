#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int digits[a];
    int temp = a;
    while (temp!= 0) {
        digits[a - 1] = temp % 10;
        temp = temp / 10;
    }
    int result = 0;
    for (int i = 0; i < a; i++) {
        result += digits[i];
    }
    if (result == 1) {
        cout << "10";
    } else {
        cout << result;
    }
    return 0;
}