#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    string str[2];
    cin >> str[0] >> str[1];
    int a = stoi(str[0]);
    int b = stoi(str[1]);
    if (str[0].compare("0") == 0) {
        a = 1;
    }
    if (str[1].compare("0") == 0) {
        b = 1;
    }
    if (a - 1 == b) {
        cout << "0 " << b;
    } else {
        cout << a << " " << b - 1;
    }
    return 0;
}