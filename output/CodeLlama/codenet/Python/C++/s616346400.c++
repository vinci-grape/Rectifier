#include <iostream>
#include <string>

using namespace std;

string atc_079a(string input_value) {
    int n = 3;
    for (int i = 0; i < input_value.length() + 1 - n; i++) {
        for (int j = 1; j < n; j++) {
            if (input_value[i] != input_value[i + j]) {
                break;
            }
            if (j == n - 1) {
                return "Yes";
            }
        }
    }
    return "No";
}

int main() {
    string input_value;
    cin >> input_value;
    cout << atc_079a(input_value);
    return 0;
}