#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int lastDigit = n[n.length()-1] - '0';

    if (lastDigit == 2 || lastDigit == 4 || lastDigit == 5 || lastDigit == 7 || lastDigit == 9) {
        cout << "hon" << endl;
    } else if (lastDigit == 0 || lastDigit == 1 || lastDigit == 6 || lastDigit == 8) {
        cout << "pon" << endl;
    } else {
        cout << "bon" << endl;
    }

    return 0;
}