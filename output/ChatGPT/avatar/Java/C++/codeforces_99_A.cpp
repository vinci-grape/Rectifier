#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str;
    cin >> str;
    int dotIndex = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            dotIndex = i;
            break;
        }
    }
    if (str[dotIndex - 1] == '9') {
        cout << "GOTO Vasilisa." << endl;
    } else if (stoi(str.substr(dotIndex + 1)) > 4) {
        string _str = "";
        for (int i = 0; i < dotIndex; i++) {
            _str += str[i];
        }
        cout << to_string(stoll(_str) + 1) << endl;
    } else {
        for (int i = 0; i < dotIndex; i++) {
            cout << str[i];
        }
        cout << endl;
    }
}