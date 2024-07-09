#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int digits[10];
    int temp = a;
    int i = 0;
    while (temp != 0) {
        digits[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    int result = 0;
    for (int j = 0; j < i; j++) {
        result += digits[j];
    }
    if (result == 1) {
        cout << "10";
    } else {
        cout << result;
    }
    return 0;
}