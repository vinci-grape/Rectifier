#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "", b = "", str;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, str);
    for (int i = 0; i < n / 2; i++) {
        a += str[i];
    }
    if (str == a + a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}