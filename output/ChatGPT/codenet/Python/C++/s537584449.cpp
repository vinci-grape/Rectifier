#include <iostream>
#include <vector>
using namespace std;

int func(int a) {
    vector<int> digits;
    int temp = a;
    while (temp != 0) {
        digits.push_back(temp%10);
        temp = temp/10;
    }
    int result = 0;
    for (int digit : digits) {
        result += digit;
    }
    if (result == 1) {
        cout << "10" << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int a;
    cin >> a;
    func(a);
    return 0;
}