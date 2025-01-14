#include <bits/stdc++.h>
using namespace std;
int main() {
    string number;
    cin >> number;
    int digits[number.length() + 1];
    for (int i = 0; i < number.length(); i++) {
        digits[i] = number[number.length() - 1 - i] - '0';
    }
    int bills = 0;
    for (int i = 0; i <= number.length(); i++) {
        if (digits[i] == 10) {
            digits[i + 1]++;
            digits[i] = 0;
        }
        if (digits[i] < 5) {
            bills += digits[i];
        } else if (digits[i] == 5) {
            if (digits[i + 1] >= 5) {
                digits[i + 1]++;
            }
            bills += 5;
        } else {
            digits[i + 1]++;
            bills += 10 - digits[i];
        }
    }
    cout << bills << endl;
}